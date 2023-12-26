#include<iostream>
using namespace std;
int main()
{
    int *p,*q,*r,i,j,r1,c1;
    cout<<"Enter Number of Rows : ";
    cin>>r1;
    cout<<"Enter Number of Columns : ";
    cin>>c1;
    int a[r1][c1];
    int b[c1][r1];
    int c[r1][r1];
    p=&a[0][0];
    q=&b[0][0];
    r=&c[0][0];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<"Enter Element : ";
            cin>>*(p+j);
        }
        p=p+c1;
    }
    p=&a[0][0];
    cout<<"Original Matrix :"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<*(p+j)<<" ";
        }
        cout<<endl;
        p=p+c1;
    }
    p=&a[0][0];
    for(i=0;i<c1;i++)
    {
        for(j=0;j<r1;j++)
        {
            *(q+j)=*(p+i);
        }
        p=p+r1;
        q=q+c1;
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<r1;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<r1;j++)
        {
            c[i][j]=0;
            for(int k=0;k<r1;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<r1;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}