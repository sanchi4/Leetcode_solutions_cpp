//https://leetcode.com/problems/word-search/
class Solution {
public:
    bool findmatch(vector<vector<char>>& board,string word,int i,int j,int l,vector<vector<bool>>& visited){
        if(l==word.size())return true;
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || visited[i][j]==true)return false;
        if(board[i][j]!=word[l])return false;
        visited[i][j]=true;
        bool ans = findmatch(board,word,i+1,j,l+1,visited) || findmatch(board,word,i-1,j,l+1,visited) || findmatch(board,word,i,j-1,l+1,visited) || findmatch(board,word,i,j+1,l+1,visited) ; 
        visited[i][j]=false;
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        bool ans=false;
        vector<vector<bool>> visited(board.size(),vector<bool> (board[0].size(),false));
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0])ans = ans || findmatch(board,word,i,j,0,visited);
            }
        }
        return ans;
    }
    
};