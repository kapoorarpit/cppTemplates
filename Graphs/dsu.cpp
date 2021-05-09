
/*int get(vector<int> &parent, int a)
{return  parent[a]=(parent[a]==a)?a:get(parent,parent[a]);}

void Union(vector<int> &parent,vector<int> &rank,int a, int b)
{
    a=get(parent,a);
    b=get(parent,b);
    if(rank[a]==rank[b])
    {
        rank[a]++;
    }
    if(rank[a]>rank[b]){parent[b]=a;}
    else{parent[a]=b;}
}

int main()
{
    int n;
    cin>>n;//number of elements
    vector<int> parent(n+1);
    vertor<int> rank(n+1,0);
    for(int i=0;i<n+1;i++)
    {parent[i]=i;}
    return 0;
}
*/