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

/**
 * Runtime: 12 ms
 * Memory Usage: 14.6 MB 
 */
class Solution {
public:
    bool evaluateTree(TreeNode* root) { 
        if (!root->left && !root->right) return root->val == 1;
        if (root->val == 2) return evaluateTree(root->left) || evaluateTree(root->right);
        return evaluateTree(root->left) && evaluateTree(root->right);
    }
};
