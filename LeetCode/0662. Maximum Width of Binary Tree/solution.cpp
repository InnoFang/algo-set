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
 * 114 / 114 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 18.2 MB 
 */
class Solution {
public:
    unordered_map<int, uint64_t> record;
    uint64_t dfs(TreeNode* node, uint64_t depth, uint64_t index) {
        if (!node) return 0;
        if (!record.count(depth)) {
            record[depth] = index;
        }
        return max(index - record[depth] + 1, max(dfs(node->left, depth + 1, index << 1), dfs(node->right, depth + 1, index << 1 | 1)));
    }
    
    int widthOfBinaryTree(TreeNode* root) {
        return dfs(root, 1, 1);
    }
};
