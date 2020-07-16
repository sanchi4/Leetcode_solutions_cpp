//https://leetcode.com/problems/binary-tree-maximum-path-sum/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int v;
    int helper(TreeNode* root){
        if(!root)return 0;
        int l = helper(root->left);
        int r = helper(root->right);
        v = max(v, root->val + (l > 0 ? l : 0) + (r > 0 ? r : 0));
        if(max(l,r)>0)return max(l,r)+root->val;
        else return root->val;
    }
    int maxPathSum(TreeNode* root) {
        v=INT_MIN;
        helper(root);
        return v;
    }
};