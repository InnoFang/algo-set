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
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> que;
        if (nullptr == root)
            return false;
        que.push(root);
        int level = 0;
        while (!que.empty()) {
            int pre;
            int sz = que.size();
            for (int i = 0; i < sz; ++i) {
                TreeNode* front = que.front();
                que.pop();
                if ((level % 2 == 0 && front->val % 2 == 0)) {
                    return false;
                } else if (level % 2 == 1 && front->val % 2 == 1) {
                    return false;
                }
                if (i == 0) {
                    pre = front->val;
                } else {
                    if (level % 2 == 0 && pre >= front->val) 
                        return false;
                    else if (level % 2 == 1 && pre <= front->val)
                        return false;
                    pre = front->val;
                }
                
                if (nullptr != front->left) que.push(front->left);
                if (nullptr != front->right) que.push(front->right);
            }
            ++level;
        }
        
        return true;
    }
};