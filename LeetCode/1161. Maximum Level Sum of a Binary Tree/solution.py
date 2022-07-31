# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
40 / 40 test cases passed.
Runtime: 264 ms
Memory Usage: 19.7 MB
"""
class Solution:
    def maxLevelSum(self, root: Optional[TreeNode]) -> int:
        q = collections.deque([root])
        ans, level, sum = 1, 1, root.val
        while q:
            level_sum = 0
            for _ in range(len(q)):
                n = q.popleft()
                level_sum += n.val
                if n.left: q.append(n.left)
                if n.right: q.append(n.right)
            if level_sum > sum:
                ans, sum = level, level_sum
            level += 1
        return ans
