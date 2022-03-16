"""
188 / 188 test cases passed.
Runtime: 72 ms
Memory Usage: 15.5 MB
"""
class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        dp = float('-inf')
        imax = imin = 1
        for num in nums:
            if num < 0:
                imax, imin = imin, imax 
            imax = max(imax * num, num)
            imin = min(imin * num, num)
            dp = max(dp, imax)
        return dp
