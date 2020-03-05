/**
 * Created by Inno Fang on 2018/3/20.
 */

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int x) { val = x; }
}

/**
 * 203 / 203 test cases passed.
 * Status: Accepted
 * Runtime: 43 ms
 */
public class Solution {

    public TreeNode buildTree(int[] inorder, int[] postorder) {
        return buildTree(postorder, 0, postorder.length, inorder, 0, inorder.length);
    }

    private TreeNode buildTree(int[] postOrder, int postStart, int postEnd, int[] inOrder, int inStart, int inEnd) {
        if (postStart >= postEnd || inStart >= inEnd) return null;
        TreeNode node = new TreeNode(postOrder[postEnd - 1]);
        int i = inStart;
        for(; i < inEnd; i++) if (inOrder[i] == node.val) break;
        int dis = i - inStart;
        node.left = buildTree(postOrder, postStart, postStart + dis, inOrder, inStart, inStart + dis);
        node.right = buildTree(postOrder, postStart + dis, postEnd - 1, inOrder, inStart + dis + 1, inEnd);
        return node;
    }
}
