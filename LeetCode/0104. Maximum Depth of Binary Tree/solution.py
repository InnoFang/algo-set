# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
39 / 39 test case passed
Status: Accepted
Runtime: 56 ms
"""
class Solution:
    def maxDepth(self, root: TreeNode) -> int:
        return 0 if root is None else max(self.maxDepth(root.left), self.maxDepth(root.right)) + 1