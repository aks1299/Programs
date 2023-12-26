#include<iostream>
using namespace std;
int main()
{
    int n,i,d,k;
    cout<<"Enter Size of array : ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter Element : ";
        cin>>a[i];
    }
    int *p=&a[0];
    for(i=0;i<n;i++)
    {
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
    cout<<"Enter position at which element is to be entered : ";
    cin>>k;
    cout<<"Enter Element to be entered : ";
    cin>>d;
    a[k-1]=d;
    for(i=0;i<n;i++)
    {
        cout<<*(p+i)<<" ";
    }
}