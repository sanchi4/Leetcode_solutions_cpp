//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

class Solution {
public:
    int findMin(vector<int>& nums) {
       int l=0,r=nums.size()-1;
        if(nums.size()==1)return nums[0];
        if(nums[l]<nums[r])return nums[l];
        while(l<=r){
            int mid = (r-l)/2 + l;
            //cout<<l<<" "<<mid<<" "<<r<<endl;
            
            if(nums[mid]>nums[mid+1])
            {
                return nums[mid+1];
            }
            if(nums[mid]<nums[mid-1]){
                return nums[mid];
            }
            if(nums[mid]>=nums[l]){
                l=mid+1;
            }
            else r=mid;
        }
        return nums[l];
    }
};