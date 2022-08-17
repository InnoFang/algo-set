# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
39 / 39 test cases passed.
Runtime: 224 ms
Memory Usage: 19.4 MB
"""
class Solution:
    def deepestLeavesSum(self, root: Optional[TreeNode]) -> int:
        ans = level_max = 0
        def dfs(node, level):
            nonlocal ans, level_max
            if not node:
                return
            if level > level_max:
                level_max = level
                ans = node.val;
            elif level == level_max:
                ans += node.val;
            dfs(node.left, level + 1)
            dfs(node.right, level + 1)
        dfs(root, 0)
        return ans
