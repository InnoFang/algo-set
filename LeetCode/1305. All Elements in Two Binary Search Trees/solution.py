# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
"""
48 / 48 test cases passed.
Runtime: 308 ms
Memory Usage: 24.1 MB
"""
class Solution:
    def getAllElements(self, root1: TreeNode, root2: TreeNode) -> List[int]:
        ans = []
        def dfs(n):
            if n:
                ans.append(n.val)
                dfs(n.left)
                dfs(n.right)
        dfs(root1)
        dfs(root2)
        return sorted(ans)
       