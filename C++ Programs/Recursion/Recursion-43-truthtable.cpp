#include<iostream>
using namespace std;
int bin(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return (n%2)+10*bin(n/2);
    }
}
int main()
{
    int s,n=7,i,a=0,b=0,c=0,e;
    cout<<"A"<<"\t"<<"B"<<"\t"<<"C"<<"\t"<<"AB + BC"<<"\n";
    for(i=0;i<=n;i++)
    {
        s=bin(i);
        c=s%10;
        s=s/10;
        b=s%10;
        s=s/10;
        a=s%10;
        s=(a*b)+(b*c);
        if(s>=2)
        {
            s=1;
        }
        cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<s<<"\n";
    }
}