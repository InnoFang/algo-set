"""
58 / 58 test cases passed.
Runtime: 304 ms
Memory Usage: 21.9 MB
"""
class Solution:
    def maxRotateFunction(self, nums: List[int]) -> int:
        n = len(nums)
        if n == 1: return 0
        total = sum(nums)
        temp = sum(i * nums[i] for i in range(n))
        ans = temp
        for i in range(n - 1):
            temp = temp - total + nums[i] * n
            ans = max(ans, temp)
        return ans
