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

pre-order traversal: 1 2 4 5 7 3 6
*/

public class Main {

    public static void preorderTraversalByRecursion(TreeNode root) {
        if (root == null) return;
        System.out.print(root.val + " ");
        preorderTraversalByRecursion(root.left);
        preorderTraversalByRecursion(root.right);
    }
    
    public static void preorderTraversal(TreeNode root) {
        
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

        preorderTraversalByRecursion(root);
        System.out.println();
    }
}