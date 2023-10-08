
/* https://practice.geeksforgeeks.org/problems/find-the-number-of-islands/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article*/




class Solution {
  public:
  
   void bfs(int row,int col,vector<vector<int>>&vis,vector<vector<char>> &grid)
   {
       vis[row][col]=1;
       queue<pair<int,int>> q;
       q.push({row,col});

       while(!q.empty()){
           int row=q.front().first;
           int col=q.front().second;
           q.pop();

           //traverse neighbour(all direction in gfg) and mark it
           for(int delrow=-1;delrow<=1;delrow++)
           {
               for(int delcol=-1;delcol<=1;delcol++)
               {
                   int nrow= row+delrow;
                   int ncol=col+delcol;
                   if(nrow>=0 && nrow<grid.size() && ncol>=0 && ncol<grid[0].size() && grid[nrow][ncol]=='1' && !vis[nrow][ncol])
                   {
                       vis[nrow][ncol]=1;
                       q.push({nrow,ncol});
                   }
               }
           }
       }

   }

  
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
         int n=grid.size();
         int m=grid[0].size();
         vector<vector<int>> vis(n,vector<int>(m,0));
         int cnt=0;
         for(int row=0;row<n;row++)
         {
             for(int col=0;col<m;col++)
             {
                 if(!vis[row][col] && grid[row][col]=='1')
                 {
                     cnt++;
                     bfs(row,col,vis,grid);
                 }
             }
         }
         return cnt;
    
    }
};