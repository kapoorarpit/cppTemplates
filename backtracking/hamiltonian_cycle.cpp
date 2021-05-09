#include<iostream>
#include<vector>
using namespace std;

bool check_last(vector<vector<int>> &v,vector<int> &k, int i)
{
    if(v[i-1][0]==1)
    return true;
    return false;
}

void display(vector<int> &k)
{
    for(int i=0;i<k.size();i++)
    cout<<k[i];
}

bool check(vector<vector<int>> &v,vector<int> &k, int i)
{
    int t=k[k.size()-1];
    if(v[i][t]!=1)
    return false;
    for(int j=0;j<k.size();j++)
    if(k[j]==i)
    return false;
    return true;
}

void hamilton(vector<vector<int>> &v,vector<int> &k, int n)
{
    if(k.size()==n)
    {
        //check for link to last
        check_last(v,k,n);
        //display()
        display(k);
        cout<<endl;
        return;
    }
    for(int i=1;i<n;i++)    
    {
        if(check(v,k,i))
        {
            k.push_back(i);
            hamilton(v,k,n);
            k.pop_back();
        }
    }
}

int main()
{                          //0  1  2  3  4
    vector<vector<int>> v={ {0, 1, 0, 1, 0},  
                            {1, 0, 1, 0, 0},  
                            {0, 1, 0, 0, 1},  
                            {1, 0, 0, 0, 1},  
                            {0, 0, 1, 1, 0}};
    
   /*
    0---1---2
    |       |
    |       |
    |       |
    3-------4
   */
    vector<int> k;
    k.push_back(0);
    int n=5;
    hamilton(v,k,n);
    return 0;
}