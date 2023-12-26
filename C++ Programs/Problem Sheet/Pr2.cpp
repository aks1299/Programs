#include<iostream>
#include<vector>
using namespace std;
class Student
{
    float tot[50];
    string stu[50];
    public : 
        void readDetails()
        {
            for(int i = 0; i < 50; i++)
            {
                cout<<"Enter Name of Student : "<<i<<endl;
                cin>>stu[i];
                cout<<"Enter marks out of 500 for student : "<<i<<endl;
                cin>>tot[i];
            }
        }
        void printResult()
        {
            int max = tot[0], min = tot[0], minid = 0, maxid = 0;
            for(int i = 0; i < 50; i++)
            {
                if(tot[i] > max)
                {
                    max = tot[i];
                    maxid = i;
                }
            }
            for(int i = 0; i < 50; i++)
            {
                if(tot[i] < min)
                {
                    min = tot[i];
                    minid = i;
                }
            }
            cout<<"Highest Scoring Student : "<<stu[maxid]<<" Marks Scored  : "<<tot[maxid]<<endl;
            cout<<"Lowest Scoring Student : "<<stu[minid]<<" Marks Scored  : "<<tot[minid]<<endl;
        }
};
class MeritList : public Student
{
    public:
        void generateMerit()
        {
            
        }
        void printMerit()
        {

        }
};
int main()
{
    return 0;
}