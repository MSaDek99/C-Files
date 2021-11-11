class Solution {
public:

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea = 0, i, j;
        if(grid.size()==0)
        return 0;
    
        for(i=0; i<grid.size(); i++){
            for(j=0; j< grid[0].size(); j++){
                if(grid[i][j] == 1){
                    int f=dfs(grid, i, j);
                    maxArea = max(maxArea, f);
                }
            }
        }
        
        return maxArea;
    }
        int dfs(vector<vector<int>>& grid, int i, int j){        
        if(i<0 or i>= grid.size() or j<0 or j>=grid[0].size()  or grid[i][j] == 0)
            return 0;
        
        grid[i][j] = 0;
return (1+dfs(grid,i+1,j)+dfs(grid,i-1,j)+dfs(grid,i,j-1)+dfs(grid,i,j+1));
    }
    
};

