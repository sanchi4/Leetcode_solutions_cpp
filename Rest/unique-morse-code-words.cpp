//https://leetcode.com/problems/unique-morse-code-words/

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string str[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set <string> transformation;
        for(auto i :words){
            string temp = "";
            for(char ch : i){
                temp += str[ch-'a'];
            }
            transformation.insert(temp);
        }
        return transformation.size();
    }
};