//https://leetcode.com/problems/island-perimeter/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        if(m==0)return 0;
        int n=grid[0].size();
        if(!n)return 0;
        int ans=0;
        vector<vector<int>> dp(m,vector<int>(n,4));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    if(i>0){
                        dp[i][j]-= grid[i-1][j]==1 ;
                    }
                    if(j>0){
                        dp[i][j]-= grid[i][j-1]==1 ;
                    }
                    if(i<m-1){
                        dp[i][j]-= grid[i+1][j]==1 ;
                    }
                    if(j<n-1){
                        dp[i][j]-= grid[i][j+1]==1 ;
                    }
                    ans+=dp[i][j];
                }
            }
        }
        
        return ans;
    }
};