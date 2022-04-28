#include <bits/stdc++.h>
using namespace std;

#define n 9

bool findEmpty(int grid[n][n], int &row, int &col)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(grid[i][j] == 0)
            {
                row=i;
                col=j;
                return true;
            }
        }
    }
    return false;
}

bool isSafe(int grid[n][n], int row, int col, int num)
{
    //Safe in row
    for (int i = 0; i < n; i++)
        if (grid[row][i] == num)
            return false;

    //Safe in column
    for (int i = 0; i < n; i++)
        if (grid[i][col] == num)
            return false;
    
    //Safe in block
    int rowFactor = row - (row % 3);
    int colFactor = col - (col % 3);
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[i + rowFactor][j + colFactor] == num)
                return false;

    return true;
}

bool solveSudokuHelper(int grid[n][n], int row, int col)
{
    if (row == n) //sudoku filled completely
    return true;
    
    if (col == n) //move to next row
        return solveSudokuHelper(grid, row + 1, 0);
    
    if (grid[row][col] != 0)
        return solveSudokuHelper(grid, row, col + 1);
    
    if(!findEmpty(grid, row, col))
        return true;
    
    for(int i=1;i<=n;i++)
    {
        if(isSafe(grid,row,col,i))
        {
            grid[row][col] = i;
            
            if(solveSudokuHelper(grid, row, col+1))
                return true;
            
            grid[row][col] = 0;
        }
    }
    return false;
}

bool solveSudoku(int grid[n][n])
{
    return(solveSudokuHelper(grid,0,0));
}

int main()
{
    int grid[n][n];
    for(int i=0;i<n;i++)
    	for(int j=0;j<n;j++)
            cin>>grid[i][j];
    
    if(solveSudoku(grid) == true)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    return 0;
}
