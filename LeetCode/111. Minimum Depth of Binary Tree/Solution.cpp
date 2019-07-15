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
 * 41 / 41 test case passed
 * Status: Accepted
 * Runtime: 16 ms
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
        int ans = 1;
        int left = root->left  ? minDepth(root->left)  : 0 ;
        int right= root->right ? minDepth(root->right) : 0 ;
        if (left == 0)  ans += right;
        else if (right == 0) ans += left;
        else ans += min(right, left);
        return ans;
    }
};
