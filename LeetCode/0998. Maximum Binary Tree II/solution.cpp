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
 * 75 / 75 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 13 MB 
 */
class Solution {
public:
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
        TreeNode *node = new TreeNode(val);
        TreeNode *prev = nullptr, *curr = root;
        while (curr != nullptr && curr->val > val) {
            prev = curr;
            curr = curr->right;
        }
        if (!prev) {
            node->left = curr;
            return node;
        }
        prev->right = node;
        node->left = curr;
        return root;
    }
};
