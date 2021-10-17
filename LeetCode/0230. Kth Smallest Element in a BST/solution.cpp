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
 * 93 / 93 test cases passed.
 * Runtime: 20 ms
 * Memory Usage: 23.8 MB 
 */
class Solution {
public:
    void inorder(TreeNode *root, vector<int> &res) {
        if (root != nullptr) {
            inorder(root->left, res);
            res.push_back(root->val);
            inorder(root->right, res);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        inorder(root, ans);
        return ans[k - 1];
    }
};
