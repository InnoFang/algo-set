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
 * 61 / 61 test cases passed.
 * Runtime: 36 ms
 * Memory Usage: 23.6 MB 
 */
class BSTIterator {
public:
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
    int next() {
        int val = traversal.front();
        traversal.pop();
        return val;
    }
    
    bool hasNext() {
        return !traversal.empty();
    }
private:
    queue<int> traversal;
    void inorder(TreeNode* root) {
        if (!root) return;
        inorder(root->left);
        traversal.push(root->val);
        inorder(root->right);
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
