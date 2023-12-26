#include<iostream>
using namespace std;
int sumas(int n)
{
    if(n < 1)
    {
        return n;
    }
    else
    {
        return n+sumas(n-1);
    }
}
int main()
{
    int k=sumas(10);
    cout<<"Sum = "<<k;
}