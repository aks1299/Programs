#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int *p,i,j,r,c,k;
    double sum=0;
    cout<<"Enter Number of Rows : ";
    cin>>r;
    cout<<"Enter Number of columns : ";
    cin>>c;
    int a[r][c];
    p=&a[0][0];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"Enter Element : ";
            cin>>*(p+j);
        }
        p=p+c;
    }
    p=&a[0][0];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            for(k=0;k<c-j-1;k++)
            {
                sum=sum+pow((1/a[i][k]),2);   
            }
            cout<<"Sum of square of reciprocal : "<<sum<<" "<<endl;
            sum=0;
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<*(p+j)<<" ";
        }
        p=p+c;
        cout<<endl;
    }
}