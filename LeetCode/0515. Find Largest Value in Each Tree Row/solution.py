# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
78 / 78 test cases passed.
Runtime: 52 ms
Memory Usage: 17.6 MB
"""
class Solution:
    def largestValues(self, root: Optional[TreeNode]) -> List[int]:
        ans = []
        if not root:
            return ans
        q = collections.deque([root])
        while q:
            level_max = float('-inf')
            for _ in range(len(q)):
                n = q.popleft()
                level_max = max(level_max, n.val)
                if n.left:
                    q.append(n.left)
                if n.right:
                    q.append(n.right)
            ans.append(level_max)
        return ans
