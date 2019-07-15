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
 * 39 / 39 test case passed
 * Status: Acepted
 * Runtime: 4 ms
 */
class Solution {
public:
    int depth = 0;
    int maxDepth(TreeNode* root) {
        if (root == NULL) return 0;
        maxDepth(root, 1);
        return depth;
    }
    void maxDepth(TreeNode* root, int d) {
        if (root->right == NULL && root->left == NULL) {
            depth = max(depth, d); 
        } else {
            if (root->left)  maxDepth(root->left, d + 1);
            if (root->right) maxDepth(root->right, d + 1);
        }
    }
};
