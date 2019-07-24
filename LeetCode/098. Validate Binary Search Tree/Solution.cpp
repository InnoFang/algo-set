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
 * 75 / 75 test case passed
 * Status: Accepted
 * Runtime: 16 ms
 */
class Solution {
public:
    void preorder(vector<int>& order, TreeNode* root) {
        if (root) {
            preorder(order, root->left);
            order.push_back(root->val);
            preorder(order, root->right);
        }
    }
    bool isValidBST(TreeNode* root) {
        vector<int> order;
        preorder(order, root);
        for (int i = 1; i < order.size(); ++ i)
            if (order[i - 1] >= order[i])
                return false;
        return true;
    }
};
