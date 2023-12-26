#include<iostream>
using namespace std;
double pow(int x,int n)
{
    if(n==0)
        return 1;
    else
        return x*pow(x,n-1);
}
int main()
{
    double n,x=0,s=0,i,c=0;
    cout<<"Enter Number of terms : ";
    cin>>n;
    cout<<"Enter x : ";
    cin>>x;
    for(i=0;i<=n;i++)
    {
        s=s+(1/pow(x,c++));
    }
    cout<<"Sum : "<<s;
    c=0;
}