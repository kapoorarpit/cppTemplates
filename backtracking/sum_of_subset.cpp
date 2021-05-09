#include<iostream>
#include<vector>
using namespace std;

int count=0;

void display(vector<int> v)
{
    for (auto &i : v)
    {
        cout<<i<<" ";   
    }
}
void sum_of_subset(int wt[],int size,int target,int sof, int pos,vector<int> &v)
{
    if(target == sof)
    {
        display(v);
        cout<<endl;
    }
    for(int i=pos;i<size;i++)
    {
        if(sof+wt[i]<=target)
        {
            v.push_back(wt[i]);
            sum_of_subset(wt, size, target, sof+wt[i], i+1, v);
            v.pop_back();
        }
    }
    return;
}

int main()
{
    int wt[]={15, 22, 14, 26, 32, 9, 16, 8};
    int size =8;
    int target =53;
    vector<int> v;
    sum_of_subset(wt, size, target,0,0,v);
    cout<<count;
    cout<<" this is to check";
    return 0;
}