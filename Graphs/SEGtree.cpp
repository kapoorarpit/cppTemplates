#include<iostream>
#include<vector>

void build(vector<int> *arr,vector<int> *seg, int start, int end, int q)
{

}


int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    vector<int> seg(4n);
    build(arr,seg,0,n-1,0);
}