//https://leetcode.com/problems/validate-binary-search-tree/

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
    stack<int> st;
    void inorder(TreeNode* root){
        if(root==NULL)return;
        if(root->left)inorder(root->left);
        st.push(root->val);
        if(root->right)inorder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL)return true;
        inorder(root);
        int a=st.top();
        st.pop();
        while(!st.empty()){
            int b=st.top();
            st.pop();
            if(a<=b)return false;
            a=b;
        }
        return true;
    }
};