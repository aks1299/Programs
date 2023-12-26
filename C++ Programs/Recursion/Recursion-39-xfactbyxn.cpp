#include<iostream>
using namespace std;
int fact(int x)
{
    if(x==0)
    {
        return 1;
    }
    else
    {
        return x*fact(x-1);
    }
}
int pow(int x,int n)
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
    int s=fact(23)/pow(23,4);
    cout<<"Div = "<<s;
}