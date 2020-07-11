//https://leetcode.com/problems/longest-palindromic-substring/
class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        if(n<1)return "";
        bool dp[n][n];
        int max1=1;
        string ans;
        
        for(int i=0;i<n;i++){
            dp[i][i]=true;
            ans = s[i];
        }
        
        for(int k=2;k<=n;k++){
            for(int i=0;i+k<=n;i++){
                int j = i+k-1;
                if(k==2){
                    dp[i][j]= s[i]==s[j] ? true:false;
                }
                else{
                    dp[i][j] = (s[i]==s[j] && dp[i+1][j-1])?true :false ;
                }
                if(dp[i][j]==true && max1<k){
                    max1=k;
                    ans = s.substr(i,j-i+1);
                }
            }
        }
        return ans;
    }
};