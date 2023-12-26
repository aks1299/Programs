#include<iostream>
#include<math.h>
using namespace std;
int sq(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return sq(x,n-1);
    }
}
int main()
{
    int a=0,b=0,c=0,root1=0,root2=0;
    cout<<"Enter The values of a,b,c : "<<"\n";
    cin>>a>>b>>c;
    cout<<a<<" "<<b<<" "<<c;
    root1=(-b+sqrt(sq(b,2)-4*a*c))/2*a;
    cout<<"Root 1 : "<<root1<<"\n";
    root2=(-b-sqrt(sq(b,2)-4*a*c))/2*a;
    cout<<"Root 2 : "<<root2<<"\n";
}