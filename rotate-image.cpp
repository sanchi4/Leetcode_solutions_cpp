//https://leetcode.com/problems/rotate-image/

class Solution {
public:
    
    void rotate(vector<vector<int>>& matrix) {
        int s = matrix.size();
        int i=0,j=s-1;
        while(i<j){
            for(int k=0;k<(j-i);k++){
                swap(matrix[i][i+k],matrix[i+k][j]);
                swap(matrix[i][i+k],matrix[j][j-k]);
                swap(matrix[i][i+k],matrix[j-k][i]);
            }
            ++i;--j;
        }
        
    }
};