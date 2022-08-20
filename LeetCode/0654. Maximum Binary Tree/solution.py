# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
107 / 107 test cases passed.
Runtime: 160 ms
Memory Usage: 15.6 MB
"""
class Solution:
    def constructMaximumBinaryTree(self, nums: List[int]) -> Optional[TreeNode]:
        def dfs(left, right):
            if left > right:
                return None
            large = left
            for i in range(left + 1, right + 1):
                if nums[i] > nums[large]:
                    large = i
            node = TreeNode(nums[large])
            node.left = dfs(left, large - 1)
            node.right = dfs(large + 1, right)
            return node
        return dfs(0, len(nums) - 1)
