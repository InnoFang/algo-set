#include <iostream>
#include <stack>

typedef struct TreeNode {
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
} TreeNode;

void preorderTraversalByRecursion(TreeNode * root) {
    if (root) {
        std::cout << root->val << " ";
        preorderTraversalByRecursion(root->left);
        preorderTraversalByRecursion(root->right);
    }
} 

void preorderTraversal(TreeNode * root) {
    std::stack<TreeNode*> nodeStack;
    while (root || !nodeStack.empty()) {
        while (root) {
            std::cout << root->val << std::endl;
            nodeStack.push(root->right);
            root = root->left;
        }
        root = nodeStack.top();
        nodeStack.pop();
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

pre-order traversal: 1 2 4 5 7 3 6
*/

int main() {
    int nodes[] = {1, 2, 3, 4, 5, 6, NULL, NULL, NULL, 7};
    int len = sizeof(nodes) / sizeof(int);
    std::cout << "Then total number of nodes: " << len << std::endl;

	TreeNode * root = generateBTree(nodes, len, 0); 
	
    preorderTraversalByRecursion(root);
    std::cout << std::endl;
    
    preorderTraversal(root);
    std::cout << std::endl;
    
    return 0;
}