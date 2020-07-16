//https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(!nums.size())return 0;
        int cur=0,max_so_far=INT_MIN;
        for(int i=0;i<nums.size();i++){
            cur=max(nums[i],nums[i]+cur);
            max_so_far = max(max_so_far,cur);
        }
        return max_so_far;
    }
};