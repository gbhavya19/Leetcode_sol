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
    vector<int> v;
    void solve(TreeNode* t)
    {
        if(t==NULL)
        {
            return;
        }
        solve(t->left);
            v.push_back(t->val);
            solve(t->right);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        solve(root);
        return v;
    }
};