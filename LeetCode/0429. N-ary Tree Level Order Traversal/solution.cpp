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
 * Runtime: 24 ms
 * Memory Usage: 11.6 MB 
 */
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if (root == nullptr) return ans;
        queue<Node*> que;    
        que.emplace(root);
        while (que.size()) {
            int layer = que.size();
            vector<int> level;
            for (int i = 0; i < layer; ++ i) {
                auto node = que.front(); que.pop();
                level.push_back(node->val);
                for (auto child : node->children) {
                    if (child != nullptr) {
                        que.emplace(child);
                    }
                }
            }
            ans.push_back(level);
        }
        return ans;
    }
};
