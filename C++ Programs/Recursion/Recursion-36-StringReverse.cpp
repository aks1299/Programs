#include<iostream>
#include<cstring>
using namespace std;
string s1;
string rev(string s,int count)
{
    if(count==-1)
    {
        return s1;
    }
    else
    {
        s1=s1+s[count];
        return rev(s,count-1);
    }
}
int main()
{
    string smain="AmanKumarSingh";
    cout<<rev(smain,smain.length());
}