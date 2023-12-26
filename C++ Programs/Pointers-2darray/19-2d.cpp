#include<iostream>
using namespace std;
int main()
{
    int r1,c1,r2,c2,i,j,sum=0;
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
            if(i==j)
            {
                sum+=*(p+j);
            }
        }
    }
    cout<<"Sum of ldiagonals : "<<sum;
    p=p+c1;
    cout<<endl;
    p=&a[0][0];
    sum=0;
    for(i=0;i<r1;i++)
    {
        for(j=c1-1;j>=0;j--)
        {
            sum+=*(p+j);
        }
    }
    cout<<"Sum of rdiagonals : "<<sum;
    p=p+c1;
    cout<<endl;
        
}