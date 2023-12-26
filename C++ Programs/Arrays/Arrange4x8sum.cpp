#include<iostream>
using namespace std;
int main()
{
    int arr[4][8] = {{1,2,3,4,5,6,7,8},
                     {1,2,3,4,5,6,7,8},
                     {8,7,6,5,4,3,2,1},
                     {8,7,6,5,4,3,2,1}};
    for(int i = 0; i < 8; i++)
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
        for(int j = 0; j < 8; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}