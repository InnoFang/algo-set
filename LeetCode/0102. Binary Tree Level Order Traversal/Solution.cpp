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
 * 34 / 34 test case passed.
 * Status: Accepted
 * Runtime: 12 ms
 */
class Solution1 {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == NULL) return vector<vector<int>>();
        queue<TreeNode*> que;
        vector<vector<int>> ans;
        que.push(root);
        int levelSize = que.size();
        vector<int> level;
        while (!que.empty()) {
            TreeNode* node = que.front();
            que.pop();
            level.push_back(node->val);
            -- levelSize;
            if (node->left) que.push(node->left);
            if (node->right)que.push(node->right);
            
            if (levelSize == 0) {
                ans.push_back(level);
                level = vector<int>();
                levelSize = que.size();
            }
        }
        return ans;
    }
};

/**
 * 34 / 34 test case passed.
 * Status: Accepted
 * Runtime: 12 ms
 */
class Solution2 {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == NULL) return vector<vector<int>>();
        queue<TreeNode*> que;
        vector<vector<int>> ans;
        que.push(root); 
        while (!que.empty()) {
            int levelSize = que.size();
            vector<int> level;
            for (int i = 0; i < levelSize; ++ i) {
                TreeNode* node = que.front();  que.pop();
                level.push_back(node->val);
                if (node->left)  que.push(node->left);
                if (node->right) que.push(node->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
};
