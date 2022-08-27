# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
114 / 114 test cases passed.
Runtime: 48 ms
Memory Usage: 15.9 MB
"""
class Solution:
    def widthOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        ans = 1
        q = collections.deque([(root, 1)])
        while q:
            ans = max(ans, q[-1][1] - q[0][1] + 1)
            for _ in range(len(q)):
                node, index = q.popleft()
                if node.left:
                    q.append((node.left, index * 2))
                if node.right:
                    q.append((node.right, index * 2 + 1))
        return ans
