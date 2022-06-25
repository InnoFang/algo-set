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
 * 78 / 78 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 21.6 MB 
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if (root == nullptr) return ans;
        queue<TreeNode*> q;
        q.emplace(root);
        while (!q.empty()) {
            int size = q.size();
            int level_max = INT_MIN;
            for (int i = 0; i < size; ++ i) {
                auto node = q.front(); q.pop();
                level_max = max(level_max, node->val);
                if (node->right) q.emplace(node->right);
                if (node->left) q.emplace(node->left);
            }
            ans.emplace_back(level_max);
        }
        return ans;
    }
};
