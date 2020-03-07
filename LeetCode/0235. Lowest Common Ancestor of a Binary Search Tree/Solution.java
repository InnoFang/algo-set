/**
 * Created by Inno Fang on 2018/1/30.
 */

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int x) { val = x; }
}

public class Solution {
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        if(root == null) return null;
        if (p.val < root.val && q.val < root.val) lowestCommonAncestor(root.left, p, q);
        if (p.val > root.val && q.val > root.val) lowestCommonAncestor(root.right, p, q);
        return root;
    }
}