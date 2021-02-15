"""
83 / 83 test cases passed.
Status: Accepted
Runtime: 76 ms
"""
class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        return sum(sorted(nums)[::2])
