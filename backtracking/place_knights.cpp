#include<iostream>
#include<vector>
using namespace std;

bool place_knights(vector<vector<int>> &grid, int n, int i,int row,int col)
{
    if(i== n*n + 1)
    {
        return true;
    }
    int arr1[]={2,2,-2,-2,1,-1,1,-1};
    int arr2[]={1,-1,1,-1,2,2,-2,-2};
    
    
    for(int j=0;j<8;j++)
    {
        if(row+arr1[j]>=0 and row+arr1[j]<n)
        if(col+arr2[j]>=0 and col+arr2[j]<n)
        if(grid[row+arr1[j]][col+arr2[j]]==0)
        {
            grid[row+arr1[j]][col+arr2[j]]=i;
            if(place_knights(grid, n, i+1,row+arr1[j], col+arr2[j]))
            return true;
            grid[row+arr1[j]][col+arr2[j]]=0;
        }
    }
    return false;
}

void printgrid(vector<vector<int>> &grid,int n)
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout<<grid[i][j]<<" ";            
        }
        cout<<endl;
    }
}


int main()
{
    int n;
    n=6;
    vector<vector<int>> grid(n,vector<int>(n,0));
    grid[0][0]=1;
    if(place_knights(grid,n,2,0,0))// move and row and col
    cout<<"true";
    else
    cout<<"false";
    cout<<endl;
    printgrid(grid, n);
    return 0;
}