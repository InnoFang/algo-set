# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
195 / 195 test cases passed.
Status: Accepted
Runtime: 36 ms
"""
class Solution:
    def check(self, n1: TreeNode, n2: TreeNode) -> bool:
        if n1 is None and n2 is None:
            return True
        if n1 is None or n2 is None:
            return False
        return (n1.val == n2.val) and self.check(n1.left, n2.right) and self.check(n1.right, n2.left)

    def isSymmetric(self, root: TreeNode) -> bool:
        return self.check(root, root)
        
