# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
422 / 422 test cases passed.
Runtime: 28 ms
Memory Usage: 37.9 MB
"""
class Solution:
    def findTarget(self, root: Optional[TreeNode], k: int) -> bool:
        if not root: return False
        que = collections.deque([root]);
        rec = set()
        while que:
            node = que.popleft()
            if (k - node.val) in rec:
                return True
            rec.add(node.val)
            if node.left: que.append(node.left)
            if node.right: que.append(node.right)
        return False
