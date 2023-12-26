#include<iostream>
using namespace std;
int main()
{
    int i,j,s=0;
    int a[6][10]={{100,323,442,123,45,65,1000,434,230,33},
                  {120,335,423,231,44,60,1098,485,252,66},
                  {116,333,445,230,55,61,1090,400,250,22},
                  {100,300,400,200,50,60,1000,400,250,20},
                  {112,303,423,214,53,61,1045,422,299,19},
                  {116,333,445,200,50,60,1089,485,252,66}};
    int *p=&a[0][0];
    //a
    for(i=0;i<6;i++)
    {
        for(j=0;j<10;j++)
        {
            s=s+*(p+j);
        }
        p=p+10;
        cout<<"Sum of Store "<<i+1<<" "<<s;
        cout<<endl;
        s=0;
    }
    //b
    cout<<endl;
    s=0;
    p=&a[0][0];
    for(i=0;i<10;i++)
    {
        for(j=0;j<6;j++)
        {
            s=s+*(p+j);
        }
        p=p+6;
        cout<<"Sum of Department "<<i+1<<" "<<s;
        cout<<endl;
        s=0;
    }
    //c
    cout<<endl;
    s=0;
    p=&a[0][0];
    for(i=0;i<6;i++)
    {
        for(j=0;j<10;j++)
        {
            s=s+*(p+j);
        }
        p=p+10;
    }
    cout<<"Sum of Sales of every department of every store : "<<" "<<s;
}