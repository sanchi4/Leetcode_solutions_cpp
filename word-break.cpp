/https://leetcode.com/problems/word-break/

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> dp(s.size()+1,false);
        dp[0]=true;
        for(int i = 1;i<=s.size();i++){
            for(int j=i;j>=0;j--){
                if(dp[j] && find(wordDict.begin(),wordDict.end(),s.substr(j,i-j))!=wordDict.end()){
                    dp[i]=true;
                    break;
                    //cout<<s.substr(j,i-j)<<" ";
                }
            }
        }
        //for(int i = 0;i<=s.size();i++)cout<<dp[i]<<" ";
        return dp[s.size()];
    }
};