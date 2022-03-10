/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

/**
 * 38 / 38 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 11.3 MB 
 */
class Solution {
public:
    void dfs(Node *root, vector<int> &order) {
        if (!root) return;
        order.emplace_back(root->val);
        for (auto &node : root->children) {
            dfs(node, order);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int> ans;
        dfs(root, ans);
        return ans;
    }
};


/**
 * 38 / 38 test cases passed.
 * Runtime: 28 ms
 * Memory Usage: 104.5 MB 
 */
class Solution2 {
public:
    vector<int> order;
    vector<int> preorder(Node* root) {
        if (!root) return order;
        order.emplace_back(root->val);
        for (auto &node : root->children) {
            preorder(node);
        }
        return order;
    }
};
