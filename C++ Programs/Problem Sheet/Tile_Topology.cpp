#include <iostream>

using namespace std;

void countArrangements(int rows, int cols, int numTiles) {
    
    int wallDimensions[rows][cols] = {0};
    int ctr = 0; 
    for(int i = 0;i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            wallDimensions[i][j] = 0;
        }
    }
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(wallDimensions[i][j] == 0 && ctr != numTiles)
            {
                wallDimensions[i][j] = 1;
                ctr++;
            }
        }
    }
    for(int i = 0;i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout<<wallDimensions[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int rows = 2;
    int cols = 3;
    int numTiles = 4;
    countArrangements(rows, cols, numTiles);
    // cout << "Number of possible arrangements: " << result << endl;

    return 0;
}
