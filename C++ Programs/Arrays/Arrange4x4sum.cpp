#include<iostream>
using namespace std;

int main()
{
    int arr[4][4] = {{1,2,3,4},
                    {1,2,3,4},
                    {4,3,2,1},
                    {4,3,2,1}};
    int sum = 10, ins = 0;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(arr[j][i] == arr[j+1][i])
            {
                int t = arr[j+1][i];
                arr[j+1][i] = arr[j+1][i+1];
                arr[j+1][i+1] = t;
            }
        }
    }
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}