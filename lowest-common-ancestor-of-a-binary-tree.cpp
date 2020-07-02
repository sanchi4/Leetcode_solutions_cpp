//https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
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
    TreeNode* LCA(TreeNode* root, TreeNode* p, TreeNode* q){
        if(!root)return NULL;
        if(root==p || root==q ) return root;
        TreeNode* l = LCA(root->left,p,q);
        TreeNode* r = LCA(root->right,p,q);
        if(l && r)return root;
        return l?l:r;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return LCA(root,p,q);
    }
};