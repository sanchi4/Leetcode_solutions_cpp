//https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele=nums[0],cnt=1;
        for(int i=1;i<nums.size();i++){
            if(ele==nums[i])cnt++;
            else{
                if(cnt==1){
                    ele=nums[i];
                }
                else cnt--;
            }
        }
        return ele;
    }
};

//Space:O(1)
//Time:O(n)