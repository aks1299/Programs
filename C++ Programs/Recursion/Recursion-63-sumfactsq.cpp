#include<iostream>
using namespace std;
double pow(int x,int n)
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
double fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    double n,s=0.0,x,i;
    cout<<"Enter number of terms : ";
    cin>>n;
    cout<<"Enter x : ";
    cin>>x;
    for(i=1;i<=n;i++)
    {
        s=s+(pow(x,i)/fact(i));
    }
    cout<<"Sum : "<<s;
}