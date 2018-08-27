import java.util.Queue;
import java.util.LinkedList;

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

level-order traversal: 1 2 3 4 5 6 7
*/

public class Main { 

    public static void levelOrderTraversal(TreeNode root) {
        if (root == null) return;

        Queue<TreeNode> que = new LinkedList<>();
        que.add(root);
        while (!que.isEmpty()) {
            TreeNode node = que.poll();
            System.out.print(node.val + " ");
            if (node.left != null) que.add(node.left);
            if (node.right != null) que.add(node.right);
        }
    }

    public static TreeNode generateBTree(Integer[] nodes, int index) {
        TreeNode node = null;

        if (index < nodes.length && nodes[index] != null) {
            node = new TreeNode(nodes[index]);
            node.left = generateBTree(nodes, index * 2 + 1);
            node.right = generateBTree(nodes, index * 2 + 2);
        }

        return node;
    }

    public static void main(String[] args) {
        Integer[] nodes = {1, 2, 3, 4, 5, 6, null, null, null, 7};
        
        TreeNode root = generateBTree(nodes, 0);

        levelOrderTraversal(root);
        System.out.println();
    }
}