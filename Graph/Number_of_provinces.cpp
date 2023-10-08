/* https://leetcode.com/problems/number-of-provinces/ */
/* https://practice.geeksforgeeks.org/problems/number-of-provinces/1 */


class Solution
{
public:
    
    void dfs(int node,vector<int> adj[],int vis[])
    {
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                dfs(it,adj,vis);
            }
        }
    }


    int findCircleNum(vector<vector<int>>& v)
     {
        vector<int>adj[v.size()];
        for(int i=0;i<v.size();i++) //make the adjcency list from adjmatrix
        {
            for(int j=0;j<v.size();j++)
            {
                if(v[i][j]==1 && i!=j)
                {
                    
                adj[i].push_back(j);
                adj[j].push_back(i);
                }
            }
        }
        int n=v.size();
        int vis[n];
        for(int i=0;i<n;i++)
        {
            vis[i]=0;
        }
        int cnt=0;
        for(int i=0;i<v.size();i++)
        {
            if(!vis[i]) // mark whole cycle as visited 
            {
                cnt++;
                dfs(i,adj,vis);
            }
        } 
        return cnt;
        
       
      }
  
};