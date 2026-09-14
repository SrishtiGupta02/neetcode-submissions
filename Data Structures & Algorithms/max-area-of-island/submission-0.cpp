class Solution {
public:
    int dfs(vector<vector<int>>& grid,int r,int c)
    {
        int m=grid.size();
        int n=grid[0].size();

        if(r<0 || r>=m || c<0 || c>=n || grid[r][c]!=1)
        {
            return 0 ;
        }


        else
        {
            
        grid[r][c]=0;
        }
            
            return 1+ dfs(grid,r+1,c)+
            dfs(grid,r-1,c)+
            dfs(grid,r,c+1)+
            dfs(grid,r,c-1);
        

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                
                if(grid[i][j]==1)
                {
                    int curr=0;
                    curr=dfs(grid,i,j);
                    count=max(count,curr);

                }
            
            }
        }
        return count;
    }
};