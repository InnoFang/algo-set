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
 * 71 / 71 test cases passed.
 * Runtime: 116 ms
 * Memory Usage: 70 MB 
 */
class Solution {
public:
    int dfs(TreeNode* root, int& ans) {
        if (!root) return 0;
        int left = dfs(root->left, ans);
        int right = dfs(root->right, ans);
        left = root->left && root->left->val == root->val ? left + 1 : 0;
        right = root->right && root->right->val == root->val ? right + 1 : 0;
        ans = max(ans, left + right);
        return max(left, right);
    }
    int longestUnivaluePath(TreeNode* root) {
        int ans = 0; 
        dfs(root, ans);
        return ans;
    }
};

