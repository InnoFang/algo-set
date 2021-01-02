"""
104 / 104 test cases passed.
Status: Accepted
Runtime: 40 ms
"""
class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        s = sorted(nums)
        return (s[-1] - 1) * (s[-2] - 1)
