#include<iostream>
using namespace std;
int fact(int x)
{
    int c = 0;
    for(int i = 1; i < x; i++)
    {
        if((x % i) == 0)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int a[10]={10, 13, 42, 3, 8, 7, 12, 5, 45, 99};
    int *p = a;
    for(int i = 0; i < 10; i++)
    {
        if(fact(*(p + i)) <= 2)
        {
            cout<<*(p + i)<<endl;
        }
    }
}