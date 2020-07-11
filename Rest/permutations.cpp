//https://leetcode.com/problems/permutations/

class Solution {
public:
    void permute(vector<int>& nums,int start,int end,vector<vector<int>>& ans ){
        if(start==end){
            ans.push_back(nums);
        }
        else{
            for(int i = start;i<end;i++){
                swap(nums[i],nums[start]);
                permute(nums,start+1,end,ans);
                swap(nums[i],nums[start]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permute(nums,0,nums.size(),ans);
        return ans;
    }
};