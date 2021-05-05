/*   vector<int> findOrder(int n, vector<vector<int>>& pre) {// number of vertices and edges(a,b) i.e from b to a
        vector<vector<int>> adj(n);  
        for(int i=0;i<pre.size();i++)
                adj[pre[i][1]].push_back(pre[i][0]);
        
        vector<int> ans;
        if(!checkcyc(adj))
            return ans;
        return topo(adj);
    }
    
    vector<int> topo(vector<vector<int>> &adj)
    {
            vector<int> ans;
            vector<int> viz(adj.size(),0);
            for(int i=0;i<adj.size();i++)
            {
                if(viz[i]==0)
                {topoutil(adj,ans,viz,i);}
            }
            reverse(ans.begin(),ans.end());
           return ans;
    }

    void topoutil(vector<vector<int>> &adj, vector<int> &ans,vector<int> &viz,int i)
    {
        viz[i]=1;
        for(int j=0;j<adj[i].size();j++)
        {
            if(viz[adj[i][j]]==0)
            {
                topoutil(adj,ans,viz,adj[i][j]);
            }
        }
        ans.push_back(i);
    }
    
    bool checkcyc(vector<vector<int>> &adj)
    {
        vector<int> viz(adj.size());
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