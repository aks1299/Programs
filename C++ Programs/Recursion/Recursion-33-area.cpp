#include<iostream>
#include<math.h>
using namespace std;
int areart(int len, int br)
{
    if(br==0)
    {
        return len;
    }
    else
    {
        return len+areart(len,br-1);
    }
}
int areac(int r,int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return r*areac(r,n-1);
    }
}
int main()
{
    int l,b,r,a,ch;
    cout<<"Enter Choice :";
    cout<<"1- Area of Rectangle";
    cout<<"2- Area of Circle";
    cout<<"3- Area of Cube";
    cout<<"4- Exit";
    cin>>ch;
    while(true)
    {
        if(ch==1)
        {
            cout<<"Enter Length and Breadth of Rectangle : ";
            cin>>l>>b;
            cout<<"Area of Rectangle = "<<areart(l,b);
            break;
        }
        else if(ch==2)   
        {
            cout<<"Enter Radius of circle : ";
            cin>>r;
            cout<<"Area of Circle ="<<3.14*areac(r,2);
            break;
        }
        else if(ch==3)
        {
            cout<<"Enter Side of Cube : ";
            cin>>a;
            cout<<"Area of Cube = "<<6*areac(a,2);
            break;
        }
        else
        {
            return false;
        }
    }
}
