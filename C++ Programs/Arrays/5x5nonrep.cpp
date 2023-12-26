#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
bool checkPresent(int arr[5][5], int n)
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(arr[i][j] == n)
            {
                return true;
            }
        }
    }
    return false;
}
void display(int arr[5][5])
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    srand(time(0));
    int arr[5][5] = {0};
    int ctr = 0,i = 0,j = 0;
    for(int i = 0; i < 5;i++)
    {
        for(int j = 0; j < 5; j++)
        {
            int x = rand() % 26;
            if(checkPresent(arr,x) == false)
            {
                arr[i][j] = x;
            }
            else
            {
                j = j-1;
            }
        }
    }
    display(arr);
}