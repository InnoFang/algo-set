function TreeNode(val) {
    this.val = val;
    this.left = this.right = null;
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

let output = [] /* store the sequence of output */

function inorderTraversalByRecursion(root) { 
    if (root == null) return;
    inorderTraversalByRecursion(root.left);
    output.push(root.val);
    inorderTraversalByRecursion(root.right);
}

function inorderTraversal(root) {
    if (root == null) return;
    const nodeStack = [];
    let node = root;
    while (node != null || nodeStack.length != 0) {
        while (node != null) {
            nodeStack.push(node);
            node = node.left;
        }
        node = nodeStack.pop();
        output.push(node.val);
        node = node.right;
    }
}

function generateBTree(nodes, index) {
    let node = null;

    if (index < nodes.length && nodes[index] != null) {
        node = new TreeNode(nodes[index]);
        node.left = generateBTree(nodes, index * 2 + 1);
        node.right = generateBTree(nodes, index * 2 + 2)
    }
    return node
}

const nodes = [1, 2, 3, 4, 5, 6, null, null, null, 7]
const root = generateBTree(nodes, 0);
inorderTraversalByRecursion(root)
console.log(output);

output = [];
inorderTraversal(root)
console.log(output);