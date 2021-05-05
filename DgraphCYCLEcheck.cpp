/*    bool canFinish(int n, vector<vector<int>>& pre) {//this collects number of edges and vertices(a,b)i.e from(b to a)
        vector<vector<int>> adj(n);
        
        for(int i=0;i<pre.size();i++)
            for(int j=0;j<pre[i].size();j++)
            {
                adj[pre[i][1]].push_back(pre[i][0]);
            }
        vector<int> viz(n,0);
        bool q=dfs(adj,viz,n);
        return q;
    }
    
    bool dfs(vector<vector<int>> &adj,vector<int> &viz,int n)
    {
        for(int i=0;i<adj.size();i++)
        {
                if(!checkit(adj,viz,i))
                    return false;
        }
        return true;
    }
    
    bool checkit(vector<vector<int>> &adj,vector<int> &viz,int i)
    {
        if(viz[i]==1)
            return false;
        if(viz[i]==2)
            return true;
        viz[i]=1;
        for(int j=0;j<adj[i].size();j++)
        {
            if(!checkit(adj,viz,adj[i][j]))
                return false;
        }
        viz[i]=2;
        return true;
    }
*/
