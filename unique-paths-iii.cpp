//https://leetcode.com/problems/unique-paths-iii/

class Solution {
public:
    int dfs(vector<vector<int>>& grid,int i,int j,int steps,int walk){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==-1)return 0;
        if(grid[i][j]==2){
            if(steps==walk)return 1;
            else return 0;
        }
        grid[i][j]=-1;
        int path = dfs(grid,i+1,j,steps+1,walk);
        path+=dfs(grid,i-1,j,steps+1,walk);
        path+=dfs(grid,i,j+1,steps+1,walk);
        path+=dfs(grid,i,j-1,steps+1,walk);
        grid[i][j]=0;
        return path;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int walk=0;
        int source_x,source_y;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0)walk++;
                if(grid[i][j]==1){
                    source_x=i;
                    source_y=j;
                }
            }
        }
        return dfs(grid,source_x,source_y,0,walk+1);
    }
};
