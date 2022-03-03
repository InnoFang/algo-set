# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
209 / 209 test cases passed.
Runtime: 248 ms
Memory Usage: 26 MB
"""
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        stk = []
        while root or stk:
            while root:
                stk.append(root)
                root = root.left
            root = stk.pop()
            k -= 1
            if k == 0:
                break
            root = root.right
        return root.val
        