#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j,k,max=0,sum=0;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of columns : ";
    cin>>n;
    int a[m][n];
    int *p=&a[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Enter Element : ";
            cin>>*(p+j);
        }
        p=p+n;
    }
    p=&a[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<*(p+j)<<" ";
        }
        cout<<endl;
        p=p+n;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n-j-1;k++)
            {
                max=a[i][k];
                if(max<a[i][k+1])
                {
                    max=a[i][k+1];
                }
            }
        }
        cout<<"Maximum element of row : "<<i<<" is "<<max;
        cout<<endl;
        sum+=max;
        max=0;
    }
    cout<<"Sum : "<<sum;
}