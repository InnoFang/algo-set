#include <iostream> 
#include <stack> 
 
typedef struct TreeNode {
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
} TreeNode;
 
void inorderTraversalByRecursion(TreeNode * root) {
    if (root) {
        inorderTraversalByRecursion(root->left);
        std::cout << root->val << " ";
        inorderTraversalByRecursion(root->right);
    }
} 

void inorderTraversal(TreeNode * root) {
     std::stack<TreeNode*> nodeStack;
     while (root || !nodeStack.empty()) {
     	while (root) {
     		nodeStack.push(root);
     		root = root->left;
		} 
		root = nodeStack.top();
		nodeStack.pop();
		std::cout << root->val << " ";
		root = root->right;
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

in-order traversal: 4 2 7 5 1 6 3
*/

int main() {
    int nodes[] = {1, 2, 3, 4, 5, 6, NULL, NULL, NULL, 7};
    int len = sizeof(nodes) / sizeof(int);
    std::cout << "Then total number of nodes: " << len << std::endl;

	TreeNode * root = generateBTree(nodes, len, 0); 
	
    inorderTraversalByRecursion(root);
    std::cout << std::endl;
    
    inorderTraversal(root);
    std::cout << std::endl;
    
    return 0;
}