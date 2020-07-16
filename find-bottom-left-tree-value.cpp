https://leetcode.com/problems/find-bottom-left-tree-value/

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
    void left(TreeNode* root, int level, int& max_level,int& ans){
        if(!root)return;
        if(max_level<level){
            ans=root->val;
            max_level=level;
        }
        if(root->left)left(root->left,level+1,max_level,ans);
        if(root->right)left(root->right,level+1,max_level,ans);
    }
    int findBottomLeftValue(TreeNode* root) {
        int ans=0;
        int max_level=-1;
        left(root,0,max_level,ans);
        return ans;
    }
    
};