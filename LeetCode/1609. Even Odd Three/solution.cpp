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
 * 105 / 105 test cases passed.
 * Runtime: 488 ms
 * Memory Usage: 147.5 MB 
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

/**
 * 105 / 105 test cases passed.
 * Runtime: 240 ms
 * Memory Usage: 147.2 MB 
 */
class Solution2 {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> que;
        que.push(root);
        int level = 0, size = 1;
        while (!que.empty()) {
            int pre;
            for (int i = 0; i < size; ++ i) {
                auto p_node = que.front(); que.pop();
                if (level & 1) { // odd level, decremental even sequential
                    // so, return false if there is incremental odd sequential
                    if (p_node->val % 2 == 1) return false;
                    if (i > 0 && p_node->val >= pre) return false;
                } else { // even level, incremental odd sequential
                    // so, return false if there is decremental even sequential
                    if (p_node->val % 2 == 0) return false;
                    if (i > 0 && p_node->val <= pre) return false;
                }
                pre = p_node->val;
                if (p_node->left) que.push(p_node->left);
                if (p_node->right) que.push(p_node->right);
            }
            ++ level;
            size = que.size(); 
        }
        return true;
    }
};
