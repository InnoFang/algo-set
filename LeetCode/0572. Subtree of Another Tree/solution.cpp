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
 * 182 / 182 test cases passed.
 * Runtime: 20 ms
 * Memory Usage: 28 MB 
 */
class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root || !subRoot) return root == subRoot;
        return isSame(root, subRoot) || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
    bool isSame(TreeNode* root, TreeNode* subRoot) {
        if (!root || !subRoot) return root == subRoot;
        return root->val == subRoot->val && isSame(root->left, subRoot->left) && isSame(root->right, subRoot->right);
    }
};