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
 * 176 / 176 test cases passed.
 * Runtime: 36 ms
 * Memory Usage: 42.8 MB 
 */
class Solution {
public:
    unordered_map<string,int> rec;
    vector<TreeNode*> ans;

    string dfs(TreeNode* node){
        if(node == nullptr) return "";
        string ss = to_string(node->val) + " " + dfs(node->left) + " " + dfs(node->right);
        ++ rec[ss];
        if(rec[ss] == 2) ans.push_back(node);
        return ss;
    }

    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
