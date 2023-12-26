#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={{15,96,61},
                 {49,30,66},
                 {56,19,58}};
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
    cout<<endl;
    for(k=0;k<3;k++)
    {
        for(l=0;l<3;l++)
        {
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    if(a[i][j]<a[i][j+1])
                    {
                        int t=a[i][j];
                        a[i][j]=a[i][j+1];
                        a[i][j+1]=t;
                    }
                }
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<*(p+j)<<" ";
        }
        p=p+3;
        cout<<endl;
    }
}