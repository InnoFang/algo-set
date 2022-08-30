# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
75 / 75 test cases passed.
Runtime: 40 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def insertIntoMaxTree(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
        node = TreeNode(val)
        prev, curr = None, root
        while curr is not None and curr.val > val:
            prev = curr
            curr = curr.right
        if prev is None:
            node.left = curr
            return node
        prev.right = node
        node.left = curr
        return root
