https://leetcode.com/problems/subsets-ii/

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> ans;
        vector<vector<int>> sol;
        ans.insert(vector<int>{});
        for(int i=0;i<nums.size();i++){
            int s = ans.size();
            cout<<s;
            vector<vector<int> >temp ;
            for(set<vector<int>>:: iterator it = ans.begin();s--;it++){
                temp.push_back(*it);
            }
            for(auto t : temp){
                t.push_back(nums[i]);
                ans.insert(t);
            }
        }
        for(set<vector<int>>:: iterator it = ans.begin();it!=ans.end();it++){
            sol.push_back(*it);
        }
        return sol; 
    }
};