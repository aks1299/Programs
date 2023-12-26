#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j,k,sum=0;
    cout<<"Enter Number of rows : ";
    cin>>r;
    cout<<"Enter Number of Columns : ";
    cin>>c;
    int a[r][c];
    int b[c][r];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"Enter Elements : ";
            cin>>a[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            for(k=0;k<r-j-1;k++)
            {
                if(b[i][k]>b[i][k+1])
                {
                    int t=b[i][k];
                    b[i][k]=b[i][k+1];
                    b[i][k+1]=t;
                }
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            a[i][j]=b[j][i];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}