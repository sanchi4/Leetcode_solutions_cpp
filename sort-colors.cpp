//https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start=0,end=nums.size()-1,mid=0;
        while(mid<=end){
            if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==0){
                swap(nums[start++],nums[mid++]);
            }
            else{
                swap(nums[mid],nums[end--]);
            }
        }
    }
};

    