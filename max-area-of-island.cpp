//https://leetcode.com/problems/max-area-of-island/

class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i,int j,vector<vector<bool>>& visited,int& cnt){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || visited[i][j])return;
        visited[i][j]=true;
        if(grid[i][j]==1 ){
            cnt++;
            dfs(grid,i+1,j,visited,cnt);
            dfs(grid,i-1,j,visited,cnt);
            dfs(grid,i,j-1,visited,cnt);
            dfs(grid,i,j+1,visited,cnt);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        if(m==0)return 0;
        int n=grid[0].size();
        if(!n)return 0;
        int ans=0;
        int cnt=0;
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!visited[i][j] && grid[i][j]==1){
                    dfs(grid,i,j,visited,cnt);
                    ans=max(cnt,ans);
                    cnt=0;
                }
            }
        }
        return ans;
    }
};