#include<iostream>
#include<cstring>
using namespace std;
class Exam
{
	int marks;
	char subject[20];
	public:
		Exam()//Fun1
		{
			marks=0;
			strcpy(subject,"Computer");
			cout<<"fn1";
		}
		Exam(char s[])//Fun2
		{
			marks=0;
			strcpy(subject,s);
			cout<<"fn2";
		}
		Exam(int m)//Fun3
		{
			marks=m;
			strcpy(subject,"Computer");
			cout<<"fn3";
		}
		Exam(char s[],int m)//Fun4
		{
			marks=m;
			strcpy(subject,s);
			cout<<"\nfn4";
		}
		Exam(Exam &E);//Fun5
		~Exam()//fun6
		{}
};
int main()
{
	Exam(60);
	Exam("Aman",34);
}
