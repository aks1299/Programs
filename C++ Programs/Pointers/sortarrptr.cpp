#include<iostream>
using namespace std;
int main()
{
    int a[10] = {12, 3, 56, 76, 32, 1, -11, 33, 54, 111};
    int *p = a;
    int *q = a;
    int t = 0;
    for(int i = 0; i < 10; i++)
    {
        for(int j = i + 1; j < 10; j++)
        {
            if(*p > *(q + j))
            {
                t = *p;
                *p = *(q + j);
                *(q + j) = t;
            }
        }
        *p++;
    }
    for(int i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";
    }
}