
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
37 / 37 test cases passed.
Runtime: 48 ms
Memory Usage: 14.6 MB
"""
class Solution:
    def increasingBST(self, root: TreeNode) -> TreeNode:
        dummy_node = TreeNode()
        prev = dummy_node
        def inorder(node):
            nonlocal prev
            if not node:
                return
            inorder(node.left)
            prev.right = node
            node.left = None
            prev = node
            inorder(node.right)
        inorder(root)
        return dummy_node.right
