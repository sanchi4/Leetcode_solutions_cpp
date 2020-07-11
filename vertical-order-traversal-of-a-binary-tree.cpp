//https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#define mp(a,b) make_pair(a,b)
class Solution {
public:
    void dfs(TreeNode* root,int x,int y,vector<pair<pair<int,int>,int> > & cor ){
        if(root==NULL)return;
        cor.push_back(mp(mp(x,y),root->val));
        dfs(root->left,x-1,y+1,cor);
        dfs(root->right,x+1,y+1,cor);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<pair<pair<int,int>,int> > cor;
        dfs(root,0,0,cor);
        sort(cor.begin(),cor.end());
        vector<vector<int> > ans;
        
        for(int i=0;i<cor.size();){
            int j=cor[i].first.first;
            vector<int> temp;
            while(i<cor.size() && cor[i].first.first == j ){
                temp.push_back(cor[i].second);
                i++;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};