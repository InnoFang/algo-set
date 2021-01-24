# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
32 / 32 test cases passed.
Status: Accepted
Runtime: 48 ms
"""
class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> TreeNode:
        def build(begin, end):
            if begin > end:
                return None

            mid = begin + (end - begin) // 2
            node = TreeNode( nums[mid] )
            node.left = build(begin, mid - 1)
            node.right = build(mid + 1, end)
            return node
        return build(0, len(nums) - 1)
