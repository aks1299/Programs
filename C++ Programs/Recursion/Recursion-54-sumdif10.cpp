#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==1)
    {
        return 12;
    }
    else
    {
        return n*10+2+sum(n-1);
    }
}
int main()
{
    cout<<sum(4);
}