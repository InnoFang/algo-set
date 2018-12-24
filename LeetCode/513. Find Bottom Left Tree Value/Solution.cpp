#include <iostream>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


/**
 * Status: Accepted
 * Runtime: 264 ms
 */
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> que;
        que.push(root);
        int ret = root->val;
        while (!que.empty()) {
            TreeNode * node = que.front();
            que.pop();
            ret = node->val;
            if (NULL != node->right) que.push(node->right);
            if (NULL != node->left)  que.push(node->left);
        }
        return ret;
    }
};