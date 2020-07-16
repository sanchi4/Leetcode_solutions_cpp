//https://leetcode.com/problems/permutations-ii/

class Solution {
public:
    
    void permute(vector<int>& nums,int start,int end,set<vector<int>>& ans ){
        if(start==end){
            ans.insert(nums);
        }
        else{
            for(int i = start;i<end;i++){
                if(i!=start && nums[i]==nums[start])continue;
                swap(nums[i],nums[start]);
                permute(nums,start+1,end,ans);
                swap(nums[i],nums[start]);
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        permute(nums,0,nums.size(),ans);
        vector<vector<int>> sol(ans.begin(),ans.end());
        return sol;
    }
};