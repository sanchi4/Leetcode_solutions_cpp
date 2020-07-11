//https://leetcode.com/problems/leaf-similar-trees/

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
    vector<int> ar1,ar2;
    void leaves(TreeNode* root){
        if(root==NULL)return;
        else{
            if(root->right==NULL && root->left==NULL)ar1.push_back(root->val);
            if(root->left)leaves(root->left);
            if(root->right)leaves(root->right);
        }
    }
    void leaves1(TreeNode* root){
        if(root==NULL)return;
        else{
            if(root->right==NULL && root->left==NULL)ar2.push_back(root->val);
            if(root->left)leaves1(root->left);
            if(root->right)leaves1(root->right);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        leaves(root1);
        leaves1(root2);
        if(ar1.size()!=ar2.size())return false;
        for(int i=0;i<ar1.size();i++){
            if(ar1[i]!=ar2[i])return false;
        }
        return true;
    }
};