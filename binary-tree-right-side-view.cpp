https://leetcode.com/problems/binary-tree-right-side-view/

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
class Solution {
public:
    void rightview(TreeNode* root, int level, int& max_level,vector<int>& ans){
        if(!root)return;
        if(max_level<level){
            ans.push_back(root->val);
            max_level=level;
        }
        if(root->right)rightview(root->right,level+1,max_level,ans);
        if(root->left)rightview(root->left,level+1,max_level,ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        int max_level=-1;
        rightview(root,0,max_level,ans);
        return ans;
    }
};