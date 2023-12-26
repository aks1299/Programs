#include<iostream>
using namespace std;
int main()
{
    int a[5]={20, 15, 46, 63, 21};
    int *p;
    p = a;
    int c = 0;
    cout<<*p<<endl;
    for(int i = 0; i < 5; i++)
    {
        if(*(p + i) % 2 != 0)
        {
            
            *p = *p + *(p + i);
        }
    }
    cout<<*p<<endl;
}