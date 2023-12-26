#include<iostream>
using namespace std;
int rfact(int x)
{
    int i,count=0;
    for(int i=0;i<x;i++)
    {
        if(x%i==0)
        {
            count++;
        }
    }
    return count;
}
int ret_prime(int x)
{
    int cnum,cterm,cloop=1;
    while(cloop==1)
    {
        if(rfact(cterm)<=2)
        {
            return cterm;
            cterm++;
        }
        if(cterm>x)
        {
            cloop=0;
        }
    }
}
int main()
{
    
}