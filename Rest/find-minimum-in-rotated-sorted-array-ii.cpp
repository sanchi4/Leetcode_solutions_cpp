//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        if(nums.size()==1)return nums[0];
        if(nums[l]<nums[r])return nums[l];
        while(l<=r){
            int mid = (r-l)/2 + l;
            
            if(nums[mid]>nums[r]){
                l=mid+1;
            }
            else if(nums[mid]<nums[l]){
                r=mid;
            }
            else{
                r--;
            }
        }
        return nums[l];
    }
};