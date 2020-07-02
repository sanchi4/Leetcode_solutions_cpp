//https://leetcode.com/problems/best-sightseeing-pair/

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& A) {
        int ans=0,cur=0;
        for(int i=0;i<A.size();i++){
            ans = max(ans,cur+A[i]);
            cur=max(cur,A[i])-1;
        }
        return ans;
    }
};

//Space:O(1)
//Time:O(n)