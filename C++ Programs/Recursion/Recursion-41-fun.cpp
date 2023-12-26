#include<iostream>
using namespace std;
int pow(int x, int n)
{
    if(n==0)
        return 1;
    else
        return x*pow(x,n-1);
}
int main()
{
    int f=0,x=0;
    cout<<"Enter value of x :";
    cin>>x;
    if(x<2)
    {
        cout<<"1st";
        f=5*pow(x,3)+3*pow(x,2)+4;
        cout<<"f="<<f;
    }
    else if(x=0)
    {
        cout<<"2nd";
        f=0;
        cout<<"f="<<f;
    }
    else if(x>2)
    {
        cout<<"3rd";
        f=-(5*pow(x,3)+3*pow(x,2)+4);
        cout<<"f="<<f;
    }
}