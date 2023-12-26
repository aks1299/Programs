#include<iostream>
using namespace std;
int count=0;
int factors(int n,int m)
{
	
	if(m==0)
	{
		return (0);
	}
	else
	{
		if((n%m)==0)
		{
			return(1+factors(n,m-1));
		}	
		else
		{
			return (0+factors(n,m-1));	
		}
	}
}
int main()
{
	int k=0;
	 k=factors(5,5);
	 if(k==2)
	 {
	 	cout<<"Prime";
	 }
	 else
	 {
	 	cout<<"not prime";
	 }
	cout<<k;
}
