# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
76 / 76 test cases passed.
Runtime: 44 ms
Memory Usage: 17.5 MB
"""
import collections

class Solution:
    def findBottomLeftValue(self, root: Optional[TreeNode]) -> int:
        q = collections.deque([root])
        while q:
            node = q.popleft()
            if node.right:
                q.append(node.right)
            if node.left:
                q.append(node.left)
            ans = node.val
        return ans
