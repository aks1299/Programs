#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string exp;
    int i,j,l,ev=0,x,y,z,w;
    cout<<"Enter the expression : ";
    getline(cin,exp);
    l=exp.length();
    char a[l];
    char *p=&a[0];
    for(i=0;i<l;i++)
    {
        *(p+i)=exp[i];
    }
    for(i=0;i<l;i++)
    {
        if(*(p+i)=='*')
        {
            x=*(p+i-1)-48;
            y=*(p+i+1)-48;
            ev=x*y;
            for(j=0;j<l;j++)
            {
                
            } 
        }
    }
}