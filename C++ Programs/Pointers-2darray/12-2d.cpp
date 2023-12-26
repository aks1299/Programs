#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={{1,9,6},
                 {4,3,6},
                 {5,9,8}};
    int *p=&a[0][0];
    int i,j,k,l;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<*(p+j)<<" ";
        }
        p=p+3;
        cout<<endl;
    }
    p=&a[0][0];
    cout<<endl;
    for(k=0;k<3;k++)
    {
        for(l=0;l<3;l++)
        {
            cout<<*(p+l)<<" ";
        }
        p=p+3;
        cout<<endl;
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<*(p+j)<<" ";
        }
        cout<<endl;
    }
}