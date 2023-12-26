#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j,k,max=0,min=0;
    cout<<"Enter Number of Rows : ";
    cin>>r;
    cout<<"Enter number of Columns : ";
    cin>>c;
    int a[r][c];
    int b[c][r];
    int d[r],e[r];
    int *p=&a[0][0];
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
            cout<<*(p+j)<<" ";
        }
        cout<<endl;
        p=p+c;
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            for(k=0;k<c-j-1;k++)
            {
                max=a[i][k];
                if(max<a[i][k+1])
                {
                    max=a[i][k+1];
                    d[i]=max;
                }
            }
        }
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
            for(k=0;k<c-j-1;k++)
            {
                min=b[i][k];
                if(min>b[i][k+1])
                {
                    min=b[i][k+1];
                    e[i]=min;
                }
            }
        }
    }
    for(i=0;i<r;i++)
    {
        cout<<d[i]<<" ";
        cout<<e[i]<<" "<<endl;
        /**if(e[i]==d[i])
        {
                cout<<"This element is largest in row and smallest in column "<<i+1<<" "<<e[i];
        }
        cout<<endl;**/
    }
}