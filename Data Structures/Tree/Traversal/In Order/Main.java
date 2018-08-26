import java.util.Stack;

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int x) { val = x; }
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

public class Main {

    public static void inorderTraversalByRecursion(TreeNode root) {
        if (root == null) return;
        inorderTraversalByRecursion(root.left);
        System.out.print(root.val + " ");
        inorderTraversalByRecursion(root.right);
    }
    
    public static void inorderTraversal(TreeNode root) {
        Stack<TreeNode> nodeStack = new Stack<>();
        while (root != null || !nodeStack.empty()) {
            while (root != null) {
                nodeStack.push(root);
                root = root.left;
            }
            root = nodeStack.pop(); 
            System.out.print(root.val + " ");
            root = root.right;
        }
    }

    public static TreeNode generaBTree(Integer[] nodes, int index) {
        TreeNode node = null;

        if (index < nodes.length && nodes[index] != null) {
            node = new TreeNode(nodes[index]);
            node.left = generaBTree(nodes, index * 2 + 1);
            node.right = generaBTree(nodes, index * 2 + 2);
        }

        return node;
    }

    public static void main(String[] args) {
        Integer[] nodes = {1, 2, 3, 4, 5, 6, null, null, null, 7};
        
        TreeNode root = generaBTree(nodes, 0);

        inorderTraversalByRecursion(root);
        System.out.println();

        inorderTraversal(root);
        System.out.println();
    }
}