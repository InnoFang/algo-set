# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
63 / 63 test cases passed.
Runtime: 40 ms
Memory Usage: 15.3 MB
"""
class Solution:
    def sumRootToLeaf(self, root: Optional[TreeNode]) -> int:
        ans = 0
        def dfs(node, bit):
            nonlocal ans
            if node:
                bit = bit * 2 + node.val
                if not node.left and not node.right:
                    ans += bit
                dfs(node.left, bit)
                dfs(node.right, bit)
        dfs(root, 0)
        return ans
