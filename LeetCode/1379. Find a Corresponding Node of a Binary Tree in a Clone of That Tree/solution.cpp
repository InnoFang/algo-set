/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

/**
 * Runtime: 508 ms
 * Memory Usage: 16.1 MB 
 */
class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        deque<TreeNode*> que;
        que.push_back(cloned);
        while (!que.empty()) {
            int size = que.size();
            for (int i = 0; i < size; ++ i) {
                auto node = que.front(); que.pop_front();
                if (node->val == target->val) {
                    return node;
                }
                if (node->left != nullptr) que.push_back(node->left);
                if (node->right != nullptr) que.push_back(node->right);
            }
        }
        return nullptr;
    }
};
