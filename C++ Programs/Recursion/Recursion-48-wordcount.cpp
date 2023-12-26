#include<iostream>
#include<cstring>
using namespace std;
int c=0;
int wrdcnt(string s)
{
    string s1=s+" ";
    int l=strlen(s1);
    for(int i=0;i<l;i++)
    {
        if(s1[i]==" ")
        {
            c++;
        }
    }
    return c;
}
int main()
{
    string a="Aman Kumar Singh";
    cout<<"Number of words : "<<wrdcnt(a);
}