#include<iostream>
using namespace std;
int c=0;
int swap(int a,int b)
{
    if(c==1)
    {
        return swap(b,a);
    }
    else
    {
        c=1;
    }
}
int main()
{
    int k=swap(20,30);
    cout<<k;
}