#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

void display(int arr[4][4])
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void generateArr(int arr[4][4],int row,int col)
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(i == row && j == col)
            {
                arr[i][j] = 0;
            }
            else
            {
                arr[i][j] = rand() % 16;
            }
        }
    }
}

int main()
{
    srand(time(0));
    int arr[4][4];

    int row = 0,col = 0;
    
    cout<<"Enter Row and Col Position of the 0 : ";
    cin>>row>>col;

    generateArr(arr,row,col);
    display(arr);
}