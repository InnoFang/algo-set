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
 * 422 / 422 test cases passed.
 * Runtime: 28 ms
 * Memory Usage: 37.9 MB 
 */
class Solution {
public:
    unordered_set<int> rec;
    bool findTarget(TreeNode* root, int k) {
        if (!root) return false;
        if (rec.count(k - root->val)) return true;
        rec.insert(root->val);
        return findTarget(root->left, k) || findTarget(root->right, k);
    }
};
