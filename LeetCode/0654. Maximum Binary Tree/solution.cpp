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
 * 107 / 107 test cases passed.
 * Runtime: 76 ms
 * Memory Usage: 41.1 MB 
 */
class Solution {
public:
    TreeNode* dfs(vector<int>& nums, int left, int right) {
        if (left > right) return nullptr;
        int large = left;
        for (int i = left + 1; i <= right; ++ i) {
            if (nums[i] > nums[large]) {
                large = i;
            }
        }
        TreeNode* node = new TreeNode(nums[large]);
        node->left = dfs(nums, left, large - 1);
        node->right = dfs(nums, large + 1, right);
        return node;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return dfs(nums, 0, nums.size() - 1);
    }
};
