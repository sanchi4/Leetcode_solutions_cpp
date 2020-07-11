//https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(mp.find(t[i])!=mp.end())
                mp[t[i]]--;
            else mp[t[i]]++;
        }
        for(unordered_map<char,int>:: iterator it=mp.begin();it!=mp.end();it++){
            if(it->second!=0)return false;
        }
        return true;
    }
};