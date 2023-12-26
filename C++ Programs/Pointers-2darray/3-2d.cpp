#include<iostream>
using namespace std;
int main()
{
    int *p,i,j,n,c=0;
    cout<<"Enter number of elements : ";
    cin>>n;
    int a[n];
    int b[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter Numbers between 1-10 : ";
        cin>>a[i];
    }
    p=&a[0];
    for(i=0;i<n;i++)
    {
        cout<<*(p+i)<<" ";   
    }
}