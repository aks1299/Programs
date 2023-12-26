#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);      
    }
}
int main()
{
    int a,b,lcm;
    cout<<"Enter A : ";
    cin>>a;
    cout<<"Enter B : ";
    cin>>b;
    lcm =(a*b)/gcd(a,b);
    cout<<"LCM : "<<lcm;
}