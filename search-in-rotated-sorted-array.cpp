//https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
public:
    
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while(l<=r){
            int mid = (r-l)/2 + l;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]<nums[r]){
                if(nums[mid]<target && target<= nums[r]){
                    l=mid+1;
                }
                else r = mid-1;
            }
            else{
                if(nums[mid]>target && target>= nums[l]){
                    r=mid-1;
                }
                else l=mid+1;
            }
        }
        return -1;
    }
};

//Space: O(1)
//Time: O(log n)
