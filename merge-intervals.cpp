//https://leetcode.com/problems/merge-intervals/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<1)return intervals;
        sort(intervals.begin(),intervals.end());
        int i=0;
        vector<vector<int> > ans;
        ans.push_back(intervals[i++]);
        
        while(i<intervals.size()){
            if(intervals[i][0]<=(ans.back())[1]){
                (ans.back())[1]=max(intervals[i][1],(ans.back())[1]);
                //cout<<"in";
            }
            else {
                ans.push_back(intervals[i]);
            }
            i++;
        }
        return ans;
    }
};  