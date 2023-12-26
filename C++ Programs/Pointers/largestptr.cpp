#include<iostream>
using namespace std;
int main()
{
    int *p;
    int a[5];
    for(int i = 0; i < 5; i++)
    {
        cout<<"Enter Number : ";
        cin>>a[i];
    }
    p = a;
    for(int i = 1; i < 5; i++)
    {
        if(*p < *(p + i))
        {
            p = p + i;
        }
    }
    cout<<"Largest is : "<<*p<<endl;
}