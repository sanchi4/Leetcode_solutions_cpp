
//https://leetcode.com/problems/max-consecutive-ones/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_cnt = 0, cur_cnt = 0;
        for (auto n : nums) {
            if (n == 1) max_cnt = max(++cur_cnt, max_cnt);
            else cur_cnt = 0;
        }
        return max_cnt;
    }
};