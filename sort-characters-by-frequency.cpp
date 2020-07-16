//https://leetcode.com/problems/sort-characters-by-frequency/

class Solution {
public:
    string frequencySort(string s) {
        map<char,int> sol;
        for(char i : s){
            if(sol.find(i)!=sol.end()){
                sol[i]++;
            }
            else sol[i]=1;
        }
        vector<pair<char,int>> temp;
        for(map<char,int> :: iterator it=sol.begin();it!=sol.end();it++){
            temp.push_back(make_pair(it->first,it->second));
        }
        sort(temp.begin(),temp.end(),[](pair<char,int> a,pair<char,int> b){
            return a.second>b.second;
        });
        string ans = "";
        for(auto i : temp){
            while(i.second--){
                ans+=i.first;
            }
        }
        return ans;
    }
};