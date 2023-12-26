#include<iostream>
using namespace std;
int arr8x8[8][8];
void display()
{
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(arr8x8[i][j] == 9)
            {
                cout<<"_ ";
            }
            else
            {
                cout<<arr8x8[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
void fillRowsandCols(int row, int col)
{
    int t = arr8x8[row][col];
    //for row
    for(int i = 0; i < 8; i++)
    {
        arr8x8[row][i] = 9;
    }
    // for column
    for(int i = 0; i < 8; i++)
    {
       arr8x8[i][col]= 9;    
    }
    arr8x8[row][col] = t;
}
void fillDiagonal(int row, int col)
{
    int r = row ,c = col,t = arr8x8[row][col];
    //forward main d
    while(r < 8 && c < 8)
    {
        arr8x8[r][c] = 9;
        r++;c++;
    }
    r = row; c = col;
    //backward main d
    while(r >= 0 && c >= 0)
    {
        arr8x8[r][c] = 9;
        r--;c--;
    }
    r = row; c = col;
    //sec forward d
    while(r >= 0 && c < 8)
    {
        arr8x8[r][c] = 9;
        r--;c++;
    }
    r = row; c = col;
    //sec backward d
    while(r < 8 && c >= 0)
    {
        arr8x8[r][c] = 9;
        r++;c--;
    }
    r = row; c = col;
    arr8x8[row][col] = t;
}
bool checkTrue(int row, int col)
{
    for (int i = 0; i < 8; i++) 
    {
        if (arr8x8[row][i] == 1 || arr8x8[i][col] == 1) 
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
                if (arr8x8[i][j] == 1) 
                {
                    return false;
                }
            }
        }
    }
    return true;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int rowch = 0, colch = 0,ctr = 0,nctr = 1;
    arr8x8[rowch][colch] = arr[ctr];
    fillRowsandCols(rowch,colch);
    fillDiagonal(rowch,colch);
    for(int rowch=0;rowch<8;rowch++)
    {
        for(int colch=0;colch<8;colch++)
        {
            arr8x8[rowch][colch] = arr[ctr];
            fillRowsandCols(rowch,colch);
            fillDiagonal(rowch,colch);
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    if(arr8x8[i][j] == 0)
                    {
                        if(checkTrue(i,j))
                        {
                            //cout<<"Row :"<<i<<" Col :"<<j<<endl;
                            arr8x8[i][j]=arr[ctr];
                            fillDiagonal(i,j);
                            fillRowsandCols(i,j);
                        }
                        else
                        {
                            //cout<<"Row :"<<i<<" Col :"<<j<<endl;
                            cout<<"Not possible"<<endl;
                        }
                    }
                }
            }
            display();
            cout<<endl;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    arr8x8[i][j]=0;
                }
            }
        }
    }
}