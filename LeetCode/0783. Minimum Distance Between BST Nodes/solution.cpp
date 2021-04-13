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
 * 46 / 46 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 9.4 MB 
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
    int minDiffInBST(TreeNode* root) {
        int ans = INT_MAX, pre = -1;
        inorder(root, pre, ans);
        return ans;
    }
};

