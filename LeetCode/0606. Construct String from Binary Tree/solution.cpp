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
 * 160 / 160 test cases passed.
 * Runtime: 24 ms
 * Memory Usage: 64.7 MB 
 */
class Solution {
public:
    string tree2str(TreeNode* root) {
        string ret = "";
        if (!root) return ret;
        ret += to_string(root->val);
        auto left = tree2str(root->left);
        auto right = tree2str(root->right);
        if (!right.empty()) {
            ret += "(" + left + ")(" + right + ")"; 
        } else if (!left.empty() && right.empty()) {
            ret += "(" + left + ")";
        }
        return ret;
    }
};
