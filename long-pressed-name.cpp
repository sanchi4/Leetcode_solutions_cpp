https://leetcode.com/problems/long-pressed-name/

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int j=0;
        if(typed.size()<name.size())return false;
        else{
            for(int i=0;i<name.size();){
                if(typed[j]==name[i]){
                    j++;i++;
                }
                else if(j>0 && typed[j]==typed[j-1])j++;
                else return false;
            }
        }
        while(j<typed.size()){
            if(typed[j]!=typed[j-1])return false;
            j++;
        }
        return true;
    }
};