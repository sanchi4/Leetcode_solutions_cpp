//https://leetcode.com/problems/largest-number/

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> str;
        string ans="";
        for(auto i : nums){
            str.push_back(to_string(i));
        }
        sort(str.begin(),str.end(),[](string a , string b){
            return a+b>b+a   ;
        });
        int i=0;
        while(i<str.size() && str[i] == "0") i++;
        for(; i<str.size(); i++) {
            ans = ans + str[i];
        }
        return ans.size()?ans:"0";
    }
};