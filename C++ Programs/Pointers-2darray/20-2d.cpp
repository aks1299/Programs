#include<iostream>
using namespace std;
int main()
{
    int r1,c1,r2,c2,i,j,k,sum=0;
    cout<<"Enter Number of rows of 1st : ";
    cin>>r1;
    cout<<"Enter Number of columns of 1st : ";
    cin>>c1;
    int a[r1][c1];
    int *p=&a[0][0];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<"Enter Element of 1st : ";
            cin>>*(p+j);
        }
        p=p+c1;
    }
    p=&a[0][0];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            for(k=0;k<c1-j-1;k++)
            {
                if(*(p+k)>*(p+k+1))
                {
                    int t=a[i][k];
                    a[i][k]=a[i][k+1];
                    a[i][k+1]=t;
                }
            }
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}