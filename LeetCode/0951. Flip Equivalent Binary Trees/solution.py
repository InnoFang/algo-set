"""
76 / 76 test cases passed.
Runtime: 40 ms
Memory Usage: 14.8 MB
"""
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def flipEquiv(self, root1: TreeNode, root2: TreeNode) -> bool:
        if root1 and root2:
            if root1.val != root2.val:
                return False
            if self.flipEquiv(root1.right, root2.right) and self.flipEquiv(root1.left, root2.left):
                return True
            if self.flipEquiv(root1.right, root2.left) and self.flipEquiv(root1.left, root2.right):
                return True
        return not root1 and not root2
