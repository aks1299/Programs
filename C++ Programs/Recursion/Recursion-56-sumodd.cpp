#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return 2*n-1+sum(n-1);
    }
}
int main()
{
    int n=0,i=0,s=0;
    cout<<"Enter number of terms : ";
    cin>>n;
    for(i=1;i<n;i++)
    {
        s=s+sum(i);
    }
    cout<<"Sum = "<<s;
}
