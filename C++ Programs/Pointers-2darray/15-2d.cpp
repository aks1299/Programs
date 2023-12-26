#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l,r=4,c=4;
    int a[r][c]={{97,72,80,13},
                 {78,31,50,22},
                 {99,57,33,26},
                 {60,38,19,24}};
    int b[r][c]={{79,27,8,31},
                 {87,13,5,22},
                 {91,75,33,62},
                 {6,83,19,42}};
    int d[r][c];
    int *p=&a[0][0];
    int *q=&b[0][0];
    int *s=&d[0][0];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            *(s+j)=*(p+j)-*(q+j);
        }
        p=p+c;
        q=q+c;
        s=s+c;
    }
    p=&a[0][0];
    q=&b[0][0];
    s=&d[0][0];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<*(s+j)<<" ";
        }
        s=s+c;
        cout<<endl;
    }
}