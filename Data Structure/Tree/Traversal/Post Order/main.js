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

post-order traversal: 4 7 5 2 6 3 1
*/

let output = [] /* store the sequence of output */

function postorderTraversalByRecursion(root) { 
    if (root == null) return;
    postorderTraversalByRecursion(root.left);
    postorderTraversalByRecursion(root.right);
    output.push(root.val);
}

function postorderTraversal(root) {
    if (root == null) return;
    const nodeStack = [];
    nodeStack.push(root)
    let pre = null;
    while (nodeStack.length != 0) {
        const cur = nodeStack[nodeStack.length - 1];
        if (cur.left != null && cur.left != pre && cur.right != pre) {
            nodeStack.push(cur.left);
        } else if (cur.right != null && cur.right != pre) {
            nodeStack.push(cur.right);
        } else {
            output.push(cur.val);
            pre = cur;
            nodeStack.pop();
        }
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
postorderTraversalByRecursion(root)
console.log(output);

output = [];
postorderTraversal(root)
console.log(output);