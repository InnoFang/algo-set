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

level-order traversal: 1 2 3 4 5 6 7
*/

let output = [] /* store the sequence of output */

function levelorderTraversal(root) {
    if (root == null) return;
    const que = [];
    que.push(root) 
    while (que.length != 0) {
        const node = que.shift();
        output.push(node.val);
        if (node.left != null) que.push(node.left);
        if (node.right != null) que.push(node.right);
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
levelorderTraversal(root)
console.log(output);