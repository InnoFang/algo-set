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
 * 40 / 40 test cases passed.
 * Runtime: 168 ms
 * Memory Usage: 104.7 MB 
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.emplace(root);
        int level = 1, ans = 1, sum = root->val;
        while (!q.empty()) {
            int sz = q.size();
            int level_sum = 0;
            for (int i = 0; i < sz; ++ i) {
                auto n = q.front(); q.pop();
                level_sum += n->val;
                if (n->left) q.emplace(n->left);
                if (n->right) q.emplace(n->right);
            }
            if (level_sum > sum) {
                sum = level_sum;
                ans = level;
            }
            ++ level;
        }
        return ans;
    }
};
