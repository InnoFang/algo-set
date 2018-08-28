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

pre-order traversal: 1 2 4 5 7 3 6
*/

let output = [] /* store the sequence of output */

function preorderTraversalByRecursion(root) { 
    if (root == null) return;
    output.push(root.val);
    preorderTraversalByRecursion(root.left);
    preorderTraversalByRecursion(root.right);
}

function preorderTraversal(root) {
    if (root == null) return;
    const nodeStack = [];
    let node = root;
    while (node != null || nodeStack.length != 0) {
        while (node != null) {
            output.push(node.val);
            nodeStack.push(node.right);
            node = node.left;
        }
        node = nodeStack.pop();
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
preorderTraversalByRecursion(root)
console.log(output);

output = [];
preorderTraversal(root)
console.log(output);