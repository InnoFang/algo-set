# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
71 / 71 test cases passed.
Runtime: 388 ms
Memory Usage: 19.3 MB
"""
class Solution:
    def longestUnivaluePath(self, root: Optional[TreeNode]) -> int:
        ans = 0
        def dfs(root):
            nonlocal ans
            if not root:
                return 0
            right = dfs(root.right)
            left = dfs(root.left)
            left = left + 1 if root.left and root.left.val == root.val else 0
            right = right + 1 if root.right and root.right.val == root.val else 0
            ans = max(ans, right + left)
            return max(right, left)
        dfs(root)
        return ans
