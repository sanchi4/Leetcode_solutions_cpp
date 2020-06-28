//https://leetcode.com/problems/generate-parentheses/

class Solution {
public:
    void paren(int n, int o,string str,vector<string>& ans){
        if(str.length()==n*2){
            ans.push_back(str);
        }
        if(o<n){
            paren(n,o+1,str+'(',ans);
        }
        if(str.length()-o < o){
            paren(n,o,str+')',ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        paren(n,0,"",ans);
        return ans;
    }
};