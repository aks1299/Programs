#include<iostream>
using namespace std;
int main()
{
    int *p,i,j,r,c,sum=0;
    cout<<"Enter Number of rows : ";
    cin>>r;
    cout<<"Enter Number of Columns : ";
    cin>>c ;
    int a[r][c];
    p=&a[0][0];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"Enter Element : ";
            cin>>a[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(j>=i)
            {
                cout<<*(p+j)<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        p=p+c;
        cout<<endl;
    }
    p=&a[0][0];
    sum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(j>=i)
            {
                sum=sum+*(p+j);
            }
        }
        p=p+c;
        cout<<endl;
    }
    cout<<"Sum of Major diagonal : "<<sum;
}