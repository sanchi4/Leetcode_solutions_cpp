//https://leetcode.com/problems/subsets/

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        ans.push_back({});
        for(int i=0;i<nums.size();i++){
            int s = ans.size();
            while(s--){
                vector<int> temp = ans[s];
                temp.push_back(nums[i]);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
