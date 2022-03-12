"""
26 / 26 test cases passed.
Runtime: 204 ms
Memory Usage: 15 MB
"""
class Solution:
    def wiggleMaxLength(self, nums: List[int]) -> int:
        n = len(nums)
        if n < 2:
            return n
        # dp[i][0] increase
        # dp[i][1] decrease
        dp = [[1] * 2 for _ in range(n)]
        for i in range(1, n):
            for j in range(i):
                if nums[i] > nums[j]:
                    dp[i][0] = max(dp[i][0], dp[j][1] + 1)
                elif nums[i] < nums[j]:
                    dp[i][1] = max(dp[i][1], dp[j][0] + 1) 
        return max(dp[n - 1][0], dp[n - 1][1])
