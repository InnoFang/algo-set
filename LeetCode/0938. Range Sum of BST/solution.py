# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
41 / 41 test cases passed.
Runtime: 204 ms
Memory Usage: 23 MB
"""
class Solution:
    def rangeSumBST(self, root: TreeNode, low: int, high: int) -> int:
        if not root:
            return 0
        if low <= root.val <= high:
            return root.val + self.rangeSumBST(root.left, low, high) + self.rangeSumBST(root.right, low, high)
        return self.rangeSumBST(root.left, low, high) if root.val > low else self.rangeSumBST(root.right, low, high)
