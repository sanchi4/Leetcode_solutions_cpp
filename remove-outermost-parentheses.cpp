// https://leetcode.com/problems/remove-outermost-parentheses/


class Solution {
public:
    string removeOuterParentheses(string S) {
        string ans;
        int cnt=0;
        for(int i=0;i<S.length()-1;i++){
            if(S[i]=='('){
                cnt++;
                if(cnt>1){
                    ans+=S[i];
                }
            }
            else{
                --cnt;
                if(cnt>0){
                    ans+=S[i];
                }
            }
        }
        return ans;
    }
};