#include<iostream>
using namespace std;
void fillRowsAndDiag(int arr[8][8],int row, int col)
{
    int t = arr[row][col];

    //for row and columns
    for(int i = 0; i < 8; i++)
    {
        arr[row][i] = 9;
        arr[i][col] = 9;
    }
    
    //for diagonals
    int r = row ,c = col;

    //forward main d
    while(r < 8 && c < 8)
    {
        arr[r][c] = 9;
        r++;c++;
    }

    r = row; c = col;

    //backward main d
    while(r >= 0 && c >= 0)
    {
        arr[r][c] = 9;
        r--;c--;
    }

    r = row; c = col;

    //sec forward d
    while(r >= 0 && c < 8)
    {
        arr[r][c] = 9;
        r--;c++;
    }

    r = row; c = col;

    //sec backward d
    while(r < 8 && c >= 0)
    {
        arr[r][c] = 9;
        r++;c--;
    }

    r = row; c = col;

    arr[row][col] = t;
}
void display(int arr[8][8])
{
    for(int i = 0; i < 8; i++)
    {
        for(int  j = 0; j < 8; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void displayArr(int *arr)
{
    for(int j = 0; j < 8; j++)
        {
            for(int k = 0; k < 8; k++)
            {
                cout<<*(arr+ k)<<" ";
            }
            arr = arr + 8;
            cout<<endl;
        }
        cout<<endl;
}
void generateSol(int arr[8][8],int row, int col)
{
    int flagarr[8];

    int arr1[8][8] = {0};
    int arr2[8][8] = {0};
    int arr3[8][8] = {0};
    int arr4[8][8] = {0};
    int arr5[8][8] = {0};
    int arr6[8][8] = {0};
    int arr7[8][8] = {0};
    int arr8[8][8] = {0};

    int *solArr[8] = { &arr1[0][0], &arr2[0][0], &arr3[0][0], &arr4[0][0], &arr5[0][0], &arr6[0][0], &arr7[0][0], &arr8[0][0]};

    for(int i = 0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(arr[i][j]==1)
            {
                arr1[i][j]=arr[i][j];
            }
            else if(arr[i][j]==2)
            {
                arr2[i][j]=arr[i][j];
            }
            else if(arr[i][j]==3)
            {
                arr3[i][j]=arr[i][j];
            }
            else if(arr[i][j]==4)
            {
                arr4[i][j]=arr[i][j];
            }
            else if(arr[i][j]==5)
            {
                arr5[i][j]=arr[i][j];
            }
            else if(arr[i][j]==6)
            {
                arr6[i][j]=arr[i][j];
            }
            else if(arr[i][j]==7)
            {
                arr7[i][j]=arr[i][j];
            }
            else if(arr[i][j]==8)
            {
                arr8[i][j]=arr[i][j];
            }
        }
    }

    for(int i = 0; i < 8; i++)
    {
        int *p = solArr[i];
        
    }
}
int main()
{
    int arr[8][8]={
        {1,0,0,0,0,0,0,0},
        {0,2,0,0,0,0,0,0},
        {0,0,3,0,0,0,0,0},
        {0,0,0,4,0,0,0,0},
        {0,0,0,0,5,0,0,0},
        {0,0,0,0,0,6,0,0},
        {0,0,0,0,0,0,7,0},
        {0,0,0,0,0,0,0,8},
    };
    int row=0,col=0;

    // cout<<"Enter Row of the first number : ";
    // cin>>row;
    // cout<<"Enter Col of the first number : ";
    // cin>>col;

    generateSol(arr,row,col);

}