/**
 * Created by Inno Fang on 2018/3/20.
 */

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int x) {
        val = x;
    }
}

/**
 * 203 / 203 test cases passed.
 * Status: Accepted
 * Runtime: 20 ms
 */
public class Solution {
    public TreeNode buildTree(int[] preorder, int[] inorder) {
        return buildTree(preorder, 0, preorder.length, inorder, 0, inorder.length);
    }

    private TreeNode buildTree(int[] preorder, int preStrart, int preEnd, int[] inorder, int inStart, int inEnd) {
        if (preStrart >= preEnd || inStart >= inEnd) return null;
        TreeNode node = new TreeNode(preorder[preStrart]);
        int i = inStart;
        for (; i < inEnd; i++) if (inorder[i] == node.val) break;
        int dis = i - inStart;
        node.left = buildTree(preorder, preStrart + 1, preStrart + dis + 1, inorder, inStart, inStart + dis);
        node.right = buildTree(preorder, preStrart + dis + 1, preEnd, inorder, inStart + dis + 1, inEnd);
        return node;
    }
}