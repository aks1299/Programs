#include<iostream>
using namespace std;
class Library
{
	protected:
		char name[200],auth[200];
		double price;
	public:
		Library()
		{
			cout<<"Enter Book's Name : ";
			cin>>name;
			cout<<"Enter Author's Name : ";
			cin>>auth;
			cout<<"Enter Price of the Book : ";
			cin>>price;
		}
		void show()
		{
			cout<<"Name : "<<name;
			cout<<"Author's Name : "<<auth;
			cout<<"Price : "<<price;
		}
};
class Compute: public Library
{
	private:
		int days,daysm,fine;
	public:
		void fines()
		{
			cout<<"Enter number of days : ";
			cin>>days;
			daysm=days-7;
        	if(daysm <=1 && daysm >=5 )
        	{
        		for(int i=1;i<daysm;i++)
        		{
        			fine=daysm*2;	
				}   	
        	}
        	else if(daysm <=6 && daysm >=10 )
        	{
            	for(int i=1;i<daysm;i++)
        		{
        			fine=daysm*3;	
				}
        	}
        	else if(daysm > 10)
        	{
           		for(int i=1;i<daysm;i++)
        		{
        			fine=daysm*5;	
				}
        	}
			else
			{
				cout<<"Invalid .";
			}
		}
		void disp()
		{
			cout<<"Name of Book : "<<name;
			cout<<"\nName of Author : "<<auth;
			cout<<"\nPrice : "<<price;
			cout<<"\nFine : "<<(((0.02*price)*days)+fine);
	}
};
int main()
{
	Compute obj;
	obj.fines();
	obj.disp();
}
