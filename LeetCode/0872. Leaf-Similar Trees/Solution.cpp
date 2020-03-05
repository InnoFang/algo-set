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
 * 36 / 36 test case passed
 * Status: Accepted
 * Runtime: 4 ms
 */
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leafValue1;
        vector<int> leafValue2;
        dfs(root1, leafValue1);
        dfs(root2, leafValue2);
        if (leafValue1.size() != leafValue2.size()) return false;
        for (int i = 0; i < leafValue1.size(); ++ i) {
            if (leafValue1[i] != leafValue2[i]) return false;
        }
        return true;
    }
private:
    void dfs(TreeNode* root, vector<int>& leafValue) {
        if (root->left == NULL && root->right == NULL) {
            leafValue.push_back(root->val);
            return;
        }
        if (root->left) dfs(root->left, leafValue);
        if (root->right) dfs(root->right, leafValue);
    }
};
