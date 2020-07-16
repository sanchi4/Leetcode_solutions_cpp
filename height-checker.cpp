https://leetcode.com/problems/height-checker/

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> arr;
        for(auto i : heights){
            arr.push_back(i);
        }
        sort(arr.begin(),arr.end());
        int ans=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=heights[i])
                ans++;
        }
        return ans;
    }
};