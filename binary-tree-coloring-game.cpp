//https://leetcode.com/problems/binary-tree-coloring-game/

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
    void findx(TreeNode* root,int x,TreeNode*& xpos){
        if(!xpos){
            if(root->val==x)
                xpos = root;
            if(root->left)findx(root->left,x,xpos);
            if(root->right)findx(root->right,x,xpos);
        }
    }
    int countchild(TreeNode* root){
        if(!root)return 0;
        if(!root->left && !root->right)return 1;
        int l = countchild(root->left);
        int r = countchild(root->right);
        return l+r+1;
    }
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        int l,r;
        TreeNode* xpos = NULL;
        findx(root,x,xpos);
        l=countchild(xpos->left);
        r=countchild(xpos->right);
        int blue = 0;
        blue=max(l,r);
        int parent=0;
        if(root->val!=x){
            parent=n-(l+r+1);
        }
        blue=max(blue,parent);
        return blue>(n-blue);
    }
};