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
 * 229 / 229 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 10.8 MB 
 */
class Solution {
public:
    int targetSum_, ans_;
    // <rest target sum, counting result>
    unordered_map<int, int> store_;
    int pathSum(TreeNode* root, int targetSum) {
        if (!root) return 0;

        targetSum_ = targetSum;
        store_[0] = 1;
        ans_ = 0;
        dfs(root, root->val);
        return ans_;
    }

    void dfs(TreeNode* root, int prefixSum) {
        if (!root) return;

        if (store_.count(prefixSum - targetSum_)) {
            ans_ += store_[prefixSum - targetSum_];
        }

        store_[prefixSum] += 1;
        if (root->left) dfs(root->left, prefixSum + root->left->val);
        if (root->right) dfs(root->right, prefixSum + root->right->val);
        store_[prefixSum] -= 1;
    }

};
