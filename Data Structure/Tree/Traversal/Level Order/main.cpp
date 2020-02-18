#include <iostream>
#include <queue>

typedef struct TreeNode {
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
} TreeNode;

void levelOrderTraversal(TreeNode * root) {
    if (root == NULL) return;

    std::queue<TreeNode*> que;
    que.push(root);
    while (!que.empty()) {
        TreeNode * node = que.front();
        que.pop();
        std::cout << node->val << " ";
        if (node->left)  que.push(node->left);
        if (node->right) que.push(node->right);
    }
} 

/* Generate a binary tree by given a node array */
TreeNode * generateBTree(int nodes[], int len, int index) {
    TreeNode * node = NULL;

    if (index < len && nodes[index]) {
        node = new TreeNode(nodes[index]);
        if (NULL == node) return NULL; 
 
        node->left = generateBTree(nodes, len, index * 2 + 1);
        node->right = generateBTree(nodes, len, index * 2 + 2);
    }
    
    return node;
}

/*
The binary tree in this example is shown as follow

       1
     /   \
    2     3
   / \   /  
  4   5 6
     /
    7

level-order traversal: 1 2 3 4 5 6 7
*/

int main() {
    int nodes[] = {1, 2, 3, 4, 5, 6, NULL, NULL, NULL, 7};
    int len = sizeof(nodes) / sizeof(int);
    std::cout << "Then total number of nodes: " << len << std::endl;

	TreeNode * root = generateBTree(nodes, len, 0);  
    
    levelOrderTraversal(root);
    std::cout << std::endl;
    
    return 0;
}
