//https://leetcode.com/problems/jump-game/

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int pos=0;
        for(int i =0 ;i<nums.size();i++){
            if(i>pos)return false;
            pos = max(pos,nums[i]+i);
            if(pos>=nums.size())return true;
        }
        return pos>=nums.size()-1;
    }
};