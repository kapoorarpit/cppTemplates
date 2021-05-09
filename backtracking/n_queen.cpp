#include<iostream>
#include<vector>
using namespace std;

//vector<vector <bool>> grid;


int count=0;

bool issafe(vector<vector<bool>> &grid, int row, int col, int n)
{
    // check for column 
    int j=col;
    for (int i = row-1; i>=0;i--) 
    {
        if(grid[i][j])
        return false;
    }
    j=col;
    //check for right upper diagonal

    for (int i = row-1,j =col-1; i>=0 and j>=0 ; i--, j--)
    {
        if(grid[i][j])
        return false;
    }    
    j=col;
    //check for left upper diagonal
    
    for (int i= row-1 , j=col +1; i>=0 and j<n ; i--,j++)
    {
        if(grid[i][j])
        return false;
    } 
   return true;
}

void countNqueen(vector<vector <bool>> &grid, int current_row, int n)
{
    if(current_row == n)
    {
        count++;
        return;
    }
    
    for (int i = 0; i <n ; i++)
    {
        if(issafe(grid, current_row,i,n))
            {
                grid[current_row][i]=true;
                countNqueen(grid, current_row+1,n);
            }
        grid[current_row][i]=false;
    }
}

int main()
{
    int n;
    cin>>n;
    vector<vector<bool>> grid(n, vector<bool>(n, false));
    countNqueen(grid, 0,n);
    cout<<count;
    return 0;
}