"""
117 / 117 test cases passed.
Runtime: 980 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        n = len(nums)
        if n < 2:
            return False
        total = sum(nums)
        if total % 2 == 1:
           return False 
        target = total >> 1
        dp = [True] + [False] * target
        for i, num in enumerate(nums):
            for j in range(target, num - 1, -1):
                dp[j] |= dp[j - num]
        return dp[target]
        