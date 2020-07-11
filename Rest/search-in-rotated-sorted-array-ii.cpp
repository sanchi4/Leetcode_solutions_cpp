//https://leetcode.com/problems/search-in-rotated-sorted-array-ii/

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        if(nums.size()==1)return nums[0]==target;
        while(l<=r){
            int mid = (r-l)/2 + l;
            //cout<<l<<" "<<mid<<" "<<r<<endl;
            if(nums[mid]==target){
                return true;
            }
            if(nums[mid]==nums[l] && nums[mid]==nums[r]){
                l++;r--;
            }
            else if(nums[mid]<=nums[r]){
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
            if(l==r)return nums[l]==target;
        }
        return false;
    }
};