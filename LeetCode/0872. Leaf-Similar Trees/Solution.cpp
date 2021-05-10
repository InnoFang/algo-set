#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

/**
 * 40 / 40 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 12.5 MB 
 */class Solution {
public:
    void dfs(TreeNode* root, vector<int>& path) {
        if (!root->left && !root->right) path.push_back(root->val);
        if (root->left) dfs(root->left, path);
        if (root->right) dfs(root->right, path);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> path1;
        vector<int> path2;
        dfs(root1, path1);
        dfs(root2, path2);
        return path1 == path2;
    }
};
