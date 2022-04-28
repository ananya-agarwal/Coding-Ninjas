/*
	Note:
	To get all the test cases accepted, make recursive calls in following order: Top, Down, Left, Right.
	This means that if the current cell is (x, y), then order of calls should be: top cell (x-1, y), 
	down cell (x+1, y), left cell (x, y-1) and right cell (x, y+1).
*/

#include<bits/stdc++.h>

using namespace std;

void printSolution(int** solution,int n)
{
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      cout<<solution[i][j] << " ";
}
void MazeUtil(int maze[][20],int** solution,int x,int y,int n)
{
  if(x==n-1 && y == n-1)
  {
    solution[x][y] = 1;
    printSolution(solution,n);
    cout<<endl;
  }
  
  if(x >=n || y >= n || x < 0 || y < 0 || maze[x][y] == 0 || solution[x][y] == 1)
  	return;
  
  solution[x][y] = 1;
  MazeUtil(maze,solution,x+1,y,n);
  MazeUtil(maze,solution,x,y+1,n);
  MazeUtil(maze,solution,x-1,y,n);
  MazeUtil(maze,solution,x,y-1,n);
  solution[x][y] = 0;
}

void RatInAMaze(int maze[][20] , int n)
{
  int** solution = new int*[n];
  for(int i=0;i<n;i++)
    solution[i] = new int[n]; 

  MazeUtil(maze,solution,0,0,n); 
}

int main()
{
    int n;
    cin>>n;
    int maze[20][20];
    
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>maze[i][j];
    
  	RatInAMaze(maze,n);
    return 0;
}
