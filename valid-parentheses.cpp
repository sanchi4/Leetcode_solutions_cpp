//https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                st.push(s[i]);
            else if(s[i]==')'){
                if(st.empty() || st.top()!='(')return false;
                else st.pop();
            }
            else if(s[i]=='}'){
                if(st.empty() || st.top()!='{')return false;
                else st.pop();
            }
            else{
                if(st.empty() || st.top()!='[')return false;
                else st.pop();
            }
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};

//time:O(n)
//space:O(n)