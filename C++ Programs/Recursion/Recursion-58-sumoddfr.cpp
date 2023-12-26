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
        return 2+sum(n-1);
    }
} 
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
int main()
{
    double n=0.0,i=0.0,s=0.0,p=0.0;
    cout<<"Enter Number of terms : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        p=sum(i);
        cout<<p<<"\n";
        s=s+1/pow(p,2);
        cout<<s<<"\n";
    }
    cout<<"Sum = "<<s;
}