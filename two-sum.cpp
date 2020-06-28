//https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> arr;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(arr.find(target-nums[i])!=arr.end()){
                ans.push_back(arr.find(target-nums[i])->second);
                ans.push_back(i);
            }
            else{
                arr[nums[i]]=i;
            }
        }
        return ans;
    }
};