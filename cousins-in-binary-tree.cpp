//https://leetcode.com/problems/cousins-in-binary-tree/

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
    bool isCousins(TreeNode* root, int x, int y) {
        if(!root)return false;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            bool xf=false,yf=false;
            while(n--){
                TreeNode* top = q.front();
                if( (top->left && top->right) && 
                  ((top->left->val==x && top->right->val==y) || (top->left->val==y && top->right->val==x))){
                    return false;
                }
                if(top->val==x){
                    xf=true;
                }
                if(top->val==y){
                    yf=true;
                }
                if(xf==true && yf==true)return true;
                if(top->left)q.push(top->left);
                if(top->right)q.push(top->right);
                q.pop();
            }
            if(xf==true || yf==true)return false;
        }
        return false;
    }
};


//Space : O(nodes)
//Time : O(nodes)