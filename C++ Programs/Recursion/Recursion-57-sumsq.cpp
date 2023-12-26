#include<iostream>
using namespace std;
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
    int n=0,i=0,s=0,x=0;
    cout<<"Enter number of terms : ";
    cin>>n;
    cout<<"Enter value of x : ";
    cin>>x;
    for(i=2;i<=n;i++)
    {
        s=s+pow(x,i);
    }
    cout<<"Sum = "<<s+1;
}
