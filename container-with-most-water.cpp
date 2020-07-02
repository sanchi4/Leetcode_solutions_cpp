//https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1;
        int ans=0;
        for(int i=0;i<height.size();i++){
            int h =min(height[left],height[right]);
            ans = max(ans,h*(right-left));
            if(h==height[left])left++;
            else right--;
        }
        return ans;
    }
};