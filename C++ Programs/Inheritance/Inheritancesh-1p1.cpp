#include<iostream>
using namespace std;
class Worker
{
	protected:
		double basic;
		char name[200];
	public:
		Worker()
		{
			cout<<"Enter Name of the Worker : ";
			gets(name);
			cout<<"Enter Basic Salary : ";
			cin>>basic;
		}
		void display()
		{
			cout<<"Name : "<<name;
			cout<<"Salary : "<<basic; 
		}
};
class Wages: public Worker
{
	private:
		int hours,rate;
		double wage;
	public: 
		int db=0;
		Wages()
		{
			cout<<"Enter Total Hours worked : ";
			cin>>hours;
			cout<<"Enter rate per hour : ";
			cin>>rate;
		}
		double overtime()
		{
			db=hours*rate;
			return db;	
		}
		void showdata()
		{
			wage=db+basic;
			cout<<"Name : "<<name;
			cout<<"\nHours worked overtime : "<<hours;
			cout<<"\nWage : "<<wage;
		}
};
int main()
{
	Wages obj;
	obj.overtime();
	obj.showdata();
}
