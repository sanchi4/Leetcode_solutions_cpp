//https://leetcode.com/problems/find-k-closest-elements/

#define mp make_pair
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int,int> > sol;
        for(int i =0;i<arr.size();i++){
            sol.push_back(mp(abs(x-arr[i]),i));
        }
        sort(sol.begin(),sol.end());
        vector<int> finans;
        for(int i=0;i<k;i++){
            finans.push_back(arr[sol[i].second]);
        }
        sort(finans.begin(),finans.end());
        return finans;
    }
};