# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
73 / 73 test cases passed.
Runtime: 36 ms
Memory Usage: 15 MB
"""
class Solution:
    def printTree(self, root: Optional[TreeNode]) -> List[List[str]]:
        def getDepth(node):
            if not node:
                return -1
            return max(getDepth(node.left), getDepth(node.right)) + 1
        def dfs(node, r, c):
            ans[r][c] = str(node.val)
            if node.left:
                dfs(node.left, r + 1, c - 2 ** (height - r - 1))
            if node.right:
                dfs(node.right, r + 1, c + 2 ** (height - r - 1))
        height = getDepth(root)
        m = height + 1
        n = 2 ** m - 1
        ans = [[''] * n for _ in range(m)]
        dfs(root, 0, (n - 1) // 2)
        return ans
