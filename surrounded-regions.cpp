//https://leetcode.com/problems/surrounded-regions/

class Solution {
public:
    void check(vector<vector<char>>& board,int i,int j){
        if(board[i][j]=='O'){
            board[i][j]='Z';
            if(i>1)check(board,i-1,j);
            if(j>1)check(board,i,j-1);
            if(i<board.size()-1)check(board,i+1,j);
            if(j<board[0].size()-1)check(board,i,j+1);
        }
    }
    void solve(vector<vector<char>>& board) {
        if(board.size()<1)return;
        int r = board.size(),c= board[0].size();
        for(int i=0;i<r;i++){
            check(board,i,0);
            check(board,i,c-1);
        }
        for(int i=0;i<c;i++){
            check(board,0,i);
            check(board,r-1,i);
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j]=='O')board[i][j]='X';
                else if(board[i][j]=='Z')board[i][j]='O';
            }
        }
    }
};