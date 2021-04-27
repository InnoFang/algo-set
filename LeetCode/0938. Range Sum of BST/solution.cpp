/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {
 */

/**
 * 41 / 41 test cases passed.
 * Runtime: 180 ms
 * Memory Usage: 63.1 MB 
 */
class Solution {
public:
    void inorder(TreeNode* root, int low, int high, int* ans) {
        if (!root) return;
        inorder(root->left, low, high, ans);
        if (root->val > high) return;
        if (root->val >= low) *ans += root->val;
        inorder(root->right, low, high, ans);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans = 0;
        inorder(root, low, high, &ans);
        return ans;
    }
};
