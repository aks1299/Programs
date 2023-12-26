#include<iostream>
using namespace std;
bool isprime(int x)
{
    int count=0;
    for(int i=1;i<x;i++)
    {
        if((x%i)==0)
            count++;
    }
    if(count<=2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int i,j,k,l,r=4,c=4;
    int a[r][c]={{97,72,80,13},
                 {78,31,50,22},
                 {99,57,33,26},
                 {60,38,19,24}};
    int *p=&a[0][0];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(isprime(*(p+j)))
            {
                cout<<"The prime number is : "<<*(p+j)<<" at row : "<<i<<" and column : "<<j<<" ";
                cout<<endl;
            }
        }
        p=p+c;
    }
}