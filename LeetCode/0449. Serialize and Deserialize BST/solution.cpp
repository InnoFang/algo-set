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
 * 62 / 62 test cases passed.
 * Runtime: 32 ms
 * Memory Usage: 26.9 MB 
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string ret = "";
        preOrder(ret, root);
        return ret;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        stringstream ss(data);
        queue<string> que;
        string s;
        while (ss >> s) que.emplace(static_cast<string>(s));
        return construct(que, INT_MIN, INT_MAX);
    }

private:
    void preOrder(string &str, TreeNode *root) {
        if (root) {
            str += to_string(root->val);
            str += " ";
            preOrder(str, root->left);
            preOrder(str, root->right);
        }
    }

    TreeNode *construct(queue<string> &data, int lower, int upper) {
        if (data.empty()) return nullptr;
        int val = atoi(data.front().c_str());
        if (lower <= val && val <= upper) {
            data.pop();
            TreeNode *node = new TreeNode(val); 
            node->left = construct(data, lower, val);
            node->right = construct(data, val, upper);
            return node;
        }
        return nullptr;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;
