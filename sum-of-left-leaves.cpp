//https://leetcode.com/problems/sum-of-left-leaves/

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
    void sum(TreeNode* root, int left,int& s){
        if(root==NULL)return;
        if(root->left==NULL && root->right==NULL and left==1)s+=root->val;
        sum(root->left,1,s);
        sum(root->right,0,s);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int s=0;
        sum(root,0,s);
        return s;
    }
};