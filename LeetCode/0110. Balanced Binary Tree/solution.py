# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
228 / 228 test cases passed.
Status: Accepted
Runtime: 96 ms
"""
class Solution:
    def depth(self, node: TreeNode) -> int:
        return 0 if node is None else max(self.depth(node.left), self.depth(node.right)) + 1

    def isBalanced(self, root: TreeNode) -> bool:
        return True if root is None else \
                abs(self.depth(root.left) - self.depth(root.right)) <= 1 \
                and self.isBalanced(root.left) \
                and self.isBalanced(root.right)