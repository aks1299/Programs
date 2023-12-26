#include<iostream>
using namespace std;
int s=0,r=0;
int reverse(int n)
{
    if(n==0)
    {
        return s;
    }
    else
    {
        r=n%10;
        s=s*10+r;
        return reverse(n/10);
    }
}
int main()
{
    cout<<reverse(12345);
}