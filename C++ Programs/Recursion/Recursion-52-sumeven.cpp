#include<iostream>
using namespace std;
int s=1;
int sum(int n)
{
    if(n==1)
    {
        return 2;
    }
    else
    {
        return 2+sum(n-1);
    }
}
int main()
{
    int n,s=0,i;
    cout<<"Enter Number of terms : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        s=s+sum(i);
    }
    cout<<"Sum = "<<s;
}