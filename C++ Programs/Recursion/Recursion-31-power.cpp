#include<iostream>
using namespace std;
int pow(int x, int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return x*pow(x,n-1);
    }
}
int main()
{
    int k=0;
    k=pow(2,4);
    cout<<" k = "<<k;
    return 0;
}