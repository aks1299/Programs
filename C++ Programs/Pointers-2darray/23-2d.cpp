#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j,k,sum=0,min=0;
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
                min=b[i][k];
                if(min>b[i][k+1])
                {
                    min=b[i][k+1];
                }
            }
        }
        cout<<"Minimum element of column : "<<i<<" is "<<min;
        cout<<endl;
        sum+=min;
        min=0;
    }
    cout<<"Sum : "<<sum;
    cout<<endl;
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