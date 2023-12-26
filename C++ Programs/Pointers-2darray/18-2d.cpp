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
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum+=b[i][j];
        }
        cout<<"Sum of column "<<i+1<<" "<<sum;
        cout<<endl;
        sum=0;
    }
}