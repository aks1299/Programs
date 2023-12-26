#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;
//display th 2d array
void display(int arr[8][8])
{
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(arr[i][j] % 2 != 0)
                cout<<arr[i][j]<<" ";
            else
                cout<<"_ ";
        }
        cout<<endl;
    }
    cout<<endl;
}
//check wether element is unique or not
bool checkValid(int arr[8][8], int x)
{
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(arr[i][j] == x)
            {
                return false;
            }
        }
    }
    return true;
}
//generate even nos
int generateEven()
{
    int x = -1;
    while(x % 2 != 0)
    {
        x = rand() % 31;
    } 
    return x;
}
//fill the rows cols and diagonals with even
void fill(int arr[8][8], int row, int col)
{
    int t = arr[row][col];
    int x = generateEven();
    if(checkValid(arr,x))
    {
    //for row and columns
    for(int i = 0; i < 8; i++)
    {
        if((arr[row][i] % 2) == 0)
        {
            arr[row][i] = x;
        }
        if((arr[i][col]) % 2 == 0)
        {
            arr[i][col] == x;
        } 
    }
    
    //for diagonals
    int r = row ,c = col;

    //forward main d
    while(r < 8 && c < 8)
    {
        if((arr[r][c] % 2) == 0)
        {
            arr[r][c] = x;
        }
        r++;c++;
    }

    r = row; c = col;

    //backward main d
    while(r >= 0 && c >= 0)
    {
        if((arr[r][c] % 2) == 0)
        {
            arr[r][c] = x;
        }
        r--;c--;
    }

    r = row; c = col;

    //sec forward d
    while(r >= 0 && c < 8)
    {
        if((arr[r][c] % 2) == 0)
        {
            arr[r][c] = x;
        }
        r--;c++;
    }

    r = row; c = col;

    //sec backward d
    while(r < 8 && c >= 0)
    {
        if((arr[r][c] % 2) == 0)
        {
            arr[r][c] = x;
        }
        r++;c--;
    }

    r = row; c = col;

    arr[row][col] = t;
    }
    else
    {
        fill(arr,row,col);
    }
}
//Checks wether postion is safe or not
bool checkSafe(int arr[8][8],int row,int col)
{
    for (int i = 0; i < 8; i++) 
    {
        if ((arr[row][i] % 2) != 0 || (arr[i][col] % 2) != 0) 
        {
            return false;
        }
    }
    // Check diagonals
    for (int i = 0; i < 8; i++) 
    {
        for (int j = 0; j < 8; j++) 
        {
            if ((i + j == row + col) || (i - j == row - col)) 
            {
                if ((arr[i][j] % 2) != 0 ) 
                {
                    return false;
                }
            }
        }
    }
    return true;
}
//main function
int main()
{
    srand(time(0));
    int arr[8][8] = {0};
    //set odd num for the 2d array
    for(int i = 0; i < 8 ; i++)
    {
        int x = 0;
        while(x % 2 == 0)
        {
            x = rand() % 31;
        }
        int y = rand() % 8;
        if(checkSafe(arr,i,y))
        {
            if(checkValid(arr,x))
            {
                arr[i][y] = x ;
            }
            else
            {
                x = rand() % 31;
                i = i-1;
            }
            fill(arr,i,y);
        }
        else
        {
            i = i-1;
        }
    }
    display(arr);
}