/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
/**
 * 186 / 186 test cases passed.
 * Runtime: 16 ms
 * Memory Usage: 24.5 MB 
 */
class Solution {
public:
    void inorder(TreeNode* root, int& pre, int& ans) {
        if (nullptr == root) return;

        inorder(root->left, pre, ans);
        if (-1 != pre) {
            ans = min(ans, abs(pre - root->val));
        }
        pre = root->val;
        inorder(root->right, pre, ans);
    }
    int getMinimumDifference(TreeNode* root) {
        int ans = INT_MAX, pre = -1;
        inorder(root, pre, ans);
        return ans;
    }
};

