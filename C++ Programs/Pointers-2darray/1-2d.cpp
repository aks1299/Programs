#include<iostream>
using namespace std;
int main()
{
    int *p,i,j,r,c;
    cout<<"Enter Number of rows : ";
    cin>>r;
    cout<<"Enter Number of Columns : ";
    cin>>c ;
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"Enter Element : ";
            cin>>a[i][j];
        }
    }
    p=&a[0][0];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(j>=i)
            {
                cout<<*(p+j)<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        p=p+c;
        cout<<endl;
    }
}