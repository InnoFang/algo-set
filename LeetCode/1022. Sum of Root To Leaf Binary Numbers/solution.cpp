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
 * 63 / 63 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 16.2 MB 
 */
class Solution {
public:
    void dfs(TreeNode *node, int bit, int &ans) {
        if (node != nullptr) {
            bit = bit * 2 + node->val;
            if (node->left == nullptr && node->right == nullptr) {
                ans += bit;
            }
            dfs(node->left, bit, ans);
            dfs(node->right, bit, ans);
        }
    }

    int sumRootToLeaf(TreeNode* root) {
        int ans = 0;
        dfs(root, 0, ans);
        return ans;
    }
};
