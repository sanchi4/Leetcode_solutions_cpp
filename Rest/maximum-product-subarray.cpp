//https://leetcode.com/problems/maximum-product-subarray/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        vector<int> maxi(n,0),mini(n,0);
        maxi[0]=nums[0];
        mini[0]=nums[0];
        
        int ans = nums[0];
        for(int i =1;i<nums.size();i++){
            if(nums[i]>0){
                maxi[i]=max(maxi[i-1]*nums[i],nums[i]);
                mini[i]=min(mini[i-1]*nums[i],nums[i]);
            }
            else{
                maxi[i]=max(mini[i-1]*nums[i],nums[i]);
                mini[i]=min(maxi[i-1]*nums[i],nums[i]);
            }
            ans = max(maxi[i],ans);
        }
        return ans;
    }
};