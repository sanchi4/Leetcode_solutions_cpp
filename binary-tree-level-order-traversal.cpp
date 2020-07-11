//https://leetcode.com/problems/binary-tree-level-order-traversal/

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root)return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int> > ans;
        while(!q.empty()){
            vector<int> temp;
            int n = q.size();
            while(n--){
                TreeNode* top = q.front();
                if(top->left)q.push(top->left);
                if(top->right)q.push(top->right);
                temp.push_back(top->val);
                q.pop();
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

//Space:O(n)
//Time:O(n)