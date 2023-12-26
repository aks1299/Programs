#include<iostream>
using namespace std;
int s=1;
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
    int n,i;
    double s=0.0;
    cout<<"Enter Number of terms : ";
    cin>>n;
    for(i=1;i<n;i++)
    {
        s=s+(1.0/sum(i));
    }
    cout<<"Sum = "<<s;
}