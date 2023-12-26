#include<iostream>
using namespace std;
int main()
{
    int *p,*q,i,j,n,m,c=0;
    cout<<"Enter Number of rows : ";
    cin>>n;
    cout<<"Enter Number of columns : ";
    cin>>m;
    int a[n][m];
    int b[n*m];
    p=&a[0][0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<"Enter Elements : ";
            cin>>a[i][j];
        }
        p=p+m;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            b[c]=a[i][j];
            c++;
        }
    }
    q=&b[0];
    for(i=0;i<(n*m);i++)
    {
        cout<<*(q+i)<<" ";
    }    
}