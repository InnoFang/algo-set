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
 * 73 / 73 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 8 MB 
 */
class Solution {
public:
    int getDepth(TreeNode* node) {
        if (!node) return -1;
        return max(getDepth(node->left), getDepth(node->right)) + 1;
    }

    vector<vector<string>> printTree(TreeNode* root) {
        int height = getDepth(root);
        int m = height + 1;
        int n = (1 << m) - 1;
        vector<vector<string>> ans(m, vector<string>(n, ""));
        queue<tuple<TreeNode*, int, int>> q;
        q.push({root, 0, (n - 1) / 2});
        while (!q.empty()) {
            auto t = q.front(); q.pop();
            TreeNode* node = get<0>(t);
            int r = get<1>(t), c = get<2>(t);
            ans[r][c] = to_string(node->val);
            if (node->left) q.push({node->left, r + 1, c - (1 << (height - r - 1))});
            if (node->right) q.push({node->right, r + 1, c + (1 << (height - r - 1))});
        }
        return ans;
    }
};
