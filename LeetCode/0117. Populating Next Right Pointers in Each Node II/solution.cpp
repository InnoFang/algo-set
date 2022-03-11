/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

/**
 * 55 / 55 test cases passed.
 * Runtime: 16 ms
 * Memory Usage: 17.2 MB 
 */
class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return nullptr;
        
        queue<Node*> que;
        que.emplace(root);
        while (!que.empty()) {
            int layer = que.size();
            Node* prev = nullptr;
            for (int i = 0; i < layer; ++ i) {
                auto curr = que.front(); que.pop();
                if (curr->left) que.emplace(curr->left);
                if (curr->right) que.emplace(curr->right);
                if (i != 0) prev->next = curr;
                prev = curr;
            }
        }
        return root;
    }
};
