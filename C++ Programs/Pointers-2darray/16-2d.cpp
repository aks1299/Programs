#include<iostream>
using namespace std;
int main()
{
    int r1,c1,r2,c2,i,j;
    cout<<"Enter Number of rows of 1st : ";
    cin>>r1;
    cout<<"Enter Number of columns of 1st : ";
    cin>>c1;
    cout<<"Enter Number of rows of 2nd : ";
    cin>>r2;
    cout<<"Enter Number of columns of 2nd : ";
    cin>>c2;
    int a[r1][c1];
    int b[r2][c2];
    int c[r1][c2];
    int *p=&a[0][0];
    int *q=&b[0][0];
    int *r=&c[0][0];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<"Enter Element of 1st : ";
            cin>>*(p+j);
        }
        p=p+c1;
    }
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<"Enter Element of 2nd : ";
            cin>>*(q+j);
        }
        q=q+c2;
    }
    p=&a[0][0];
    q=&b[0][0];
    r=&c[0][0];
    if(r1==c2)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                for(int k=0;k<r1;k++)
                {
                    *(r+k)+=*(p+k)**(q+i);
                }       
            }
            p=p+r1;
            q=q+r1;
            r=r+c2;
        }
    }
    else
    {
        cout<<"The Matrices cannot be multiplied. ";
    }
    p=&a[0][0];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<*(p+j)<<" ";
        }
        p=p+c1;
        cout<<endl;
    }
    q=&b[0][0];
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<*(q+j)<<" ";
        }
        q=q+c2;
        cout<<endl;
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<c[i][j]<<" ";       
        }
        cout<<endl;
    }
}
