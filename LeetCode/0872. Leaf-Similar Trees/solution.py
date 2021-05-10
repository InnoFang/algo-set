# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
40 / 40 test cases passed.
Runtime: 44 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def leafSimilar(self, root1: TreeNode, root2: TreeNode) -> bool:
        def dfs(root, path):
            if not root.left and not root.right:
                path.append(root.val)
            if root.left:
                dfs(root.left, path)
            if root.right:
                dfs(root.right, path)
        path1, path2 = [], []
        dfs(root1, path1)
        dfs(root2, path2)
        return path1 == path2
