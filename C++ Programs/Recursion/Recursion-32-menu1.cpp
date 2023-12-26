#include<iostream>
using namespace std;
int check(int n)
{
    if(n==0)
        return true;
    else if(n==1)
        return false;
    else
        return check(n-2);
}
int sumodd(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return 2*n-1+sumodd(n-1);
    }
}
int sumeven(int n)
{
    if(n==1)
    {
        return 2;
    }
    else
    {
        return 2+sumeven(n-1);
    }
}
int main()
{
    int n,ne,no,so=0,i=0,se=0,ch=0;
    cout<<"Enter choice : "<<"\n";
    cout<<"1- Check Even or Odd."<<"\n";
    cout<<"2- Sum of even Numbers. "<<"\n";
    cout<<"3- Sum of odd Numbers."<<"\n";
    cout<<"4- Exit."<<"\n";
    cin>>ch;
    while(true)
    {
        if(ch==1)
        {
            cout<<"Enter number to be checked : ";
            cin>>n;
            bool b=check(n);
            if(b==true)
                cout<<"Even.";
            else
                cout<<"Odd.";
        }
        else if(ch==2)
        {
            cout<<"Enter number of terms : ";
            cin>>ne;
        }
        else if(ch==3)
        {
            cout<<"Enter number of terms : ";
            cin>>no;
        }
        else
        {
            break;
        }
    }
}