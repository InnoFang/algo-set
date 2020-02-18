#include <iostream> 
#include <stack> 
 
typedef struct TreeNode {
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
} TreeNode;
 
void postorderTraversalByRecursion(TreeNode * root) {
    if (root) {
        postorderTraversalByRecursion(root->left);
        postorderTraversalByRecursion(root->right);
        std::cout << root->val << " ";
    }
} 

void postorderTraversal(TreeNode * root) {
	if (root == NULL) return;
	
	std::stack<TreeNode*> nodeStack; 
	TreeNode * pre = NULL; /* store the previous node that have been output */
	nodeStack.push(root);
	while (!nodeStack.empty()) {
		TreeNode * cur = nodeStack.top();
		if (cur->left && cur->left != pre && cur->right != pre) {
			nodeStack.push(cur->left);
		} else if (cur->right && cur->right != pre) {
            nodeStack.push(cur->right);
		} else {
			std::cout << cur->val << " ";
			pre = cur;
			nodeStack.pop();
		}
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

post-order traversal: 4 7 5 2 6 3 1
*/

int main() {
    int nodes[] = {1, 2, 3, 4, 5, 6, NULL, NULL, NULL, 7};
    int len = sizeof(nodes) / sizeof(int);
    std::cout << "Then total number of nodes: " << len << std::endl;

	TreeNode * root = generateBTree(nodes, len, 0); 
	
    postorderTraversalByRecursion(root);
    std::cout << std::endl;
    
    postorderTraversal(root);
    std::cout << std::endl;
    
    return 0;
}
