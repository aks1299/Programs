#include<iostream>
using namespace std;
int add(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return add(a+1,b-1);
	}
}
int main()
{
	int k=0;
	k=add(3,4);
	cout<<k;
}
