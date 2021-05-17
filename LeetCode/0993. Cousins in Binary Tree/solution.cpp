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
 * 104 / 104 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 10.6 MB 
 */
class Solution {
public:
    using PTT = pair<TreeNode*, TreeNode*>;
    bool isCousins(TreeNode* root, int x, int y) {
        queue<PTT> que;
        que.push( {root, nullptr} );
        while (!que.empty()) {
            size_t sz = que.size();
            vector<PTT> level;
            while (sz--) {
                auto [node, parent] = que.front();
                if (node->val == x || node->val == y) {
                    level.push_back( {node, parent} );
                }
                if (node->left) {
                    que.push( {node->left, node} );
                }
                if (node->right) {
                    que.push( {node->right, node} );
                }
                que.pop();
            }
            if (level.size() == 0) continue;
            if (level.size() == 1) return false;
            if (level.size() == 2) {
                return level[0].second != level[1].second;
            }
        }
        return false;
    }
};
