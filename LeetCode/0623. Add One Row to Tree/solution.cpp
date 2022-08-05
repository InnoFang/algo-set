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
 * 109 / 109 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 24.4 MB 
 */
class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth == 1) return new TreeNode(val, root, nullptr);
        queue<TreeNode*> que;
        que.emplace(root);
        for (int i = 1; i < depth - 1; ++ i) {
            int sz = que.size();
            for (int j = 0; j < sz; ++ j) {
                auto node = que.front(); que.pop();
                if (node->left) que.emplace(node->left);
                if (node->right) que.emplace(node->right);
            }
        }
        while (!que.empty()) {
            auto node = que.front(); que.pop();
            node->left = new TreeNode(val, node->left, nullptr);
            node->right = new TreeNode(val, nullptr, node->right);
        }
        return root;
    }
};
