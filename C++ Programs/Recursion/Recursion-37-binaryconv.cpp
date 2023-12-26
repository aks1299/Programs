#include<iostream>
using namespace std;
int bin(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return (n%2)+10*(bin(n/2));
    }
}
int oct(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return (n%8)+10*(oct(n/8));
    }
}
int hex(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return (n%16)+10*(hex(n/16));
    }
}
int main()
{
    cout<<bin(77)<<"\n";
    cout<<oct(77)<<"\n";
    cout<<hex(77);
}