#include<iostream>
#include<vector>
using namespace std;

int main()
{
    
}
class Solution{
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) 
    {
        vector<string> s;
        //string q;
        //findPathUtil(m,s,q,n,0,0);
        return s;
    }
    
void findPathUtil(vector<vector<int>> &m, vector<string> &s,string &q, int n,int row,int col)
    {
        // to check for termination
        if(row==n-1 and col==n-1)
        {
            s.push_back(q);            
            return;
        }
        
        // condition 
        if(col-1>=0 and m[row][col-1]==1)
        {
            q.push('U');
            m[row][col]=-1;
            findPathUtil(m,s,q,n,row,col-1);
            m[row][col]=1;
            q.pop();
        }      
        if(col+1<=n-1 and m[row][col+1]==1)
        {
            q.push('D');
            m[row][col]=-1;
            findPathUtil(m,s,q,n,row,col+1);
            m[row][col]=1;
            q.pop();
        }        
        if(row-1>=0 and m[row-1][col]==1)
        {
            q.push('L');
            m[row][col]=-1;
            findPathUtil(m,s,q,n,row-1,col);
            m[row][col]=1;
            q.pop();
        }
        if(row+1<=n-1 and m[row+1][col]==1)
        {
            q.push('R');
            m[row][col]=-1;
            findPathUtil(m,s,q,n,row+1,col);
            m[row][col]=1;
            q.pop();
        }        
    }
};
