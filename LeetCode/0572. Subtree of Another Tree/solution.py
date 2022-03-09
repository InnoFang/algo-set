# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
182 / 182 test cases passed.
Runtime: 112 ms
Memory Usage: 16.3 MB
"""
class Solution:
    def isSubtree(self, root: TreeNode, subRoot: TreeNode) -> bool:
        def same(r, s):
            if not r or not s: return r == s
            return r.val == s.val and same(r.left, s.left) and same(r.right, s.right)
        
        if not root or not subRoot: return root == subRoot
        return same(root, subRoot) or self.isSubtree(root.left, subRoot) or self.isSubtree(root.right, subRoot)
