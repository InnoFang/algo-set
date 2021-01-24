# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
110 / 110 test cases passed.
Status: Accepted
Runtime: 32 ms
"""
class Solution:
    def sumNumbers(self, root: TreeNode) -> int:
        def dfs(node, pre_sum):
            if not node:
                return 0
            val = pre_sum * 10 + node.val
            if not node.left and not node.right:
                return val
            return dfs(node.left, val) + dfs(node.right, val)

        return dfs(root, 0)
