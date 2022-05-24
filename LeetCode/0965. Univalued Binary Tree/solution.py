# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
72 / 72 test cases passed.
Runtime: 44 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def isUnivalTree(self, root: TreeNode) -> bool:
        if not root: return True
        if root.left and root.left.val != root.val: return False
        if root.right and root.right.val != root.val: return False
        return self.isUnivalTree(root.left) and self.isUnivalTree(root.right)
       