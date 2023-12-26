#include<iostream>
#include<cstring>
using namespace std;
int leap(int x)
{
    if(x==0)
    {
        return 1;
    }
    else if(x<0)
    {
        return 0;
    }
    else
    {
        return leap(x-4);
    }
}
int main()
{
    int year=0;
    cout<<"Enter Year : ";
    cin>>year;
    if(leap(year)==0)
    {
        cout<<"Not a Leap Year.";
    }
    else if(leap(year)==1)
    {
        cout<<"Leap Year.";
    }
    else
    {
        cout<<"Invalid";
    }
}