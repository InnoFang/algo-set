"""
223 / 223 test cases passed.
Runtime: 1080 ms
Memory Usage: 15 MB
"""
class Solution:
    def findNumberOfLIS(self, nums: List[int]) -> int:
        n, longest = len(nums), 1
        dp, cnt = [1] * n, [1] * n
        for i in range(1, n):
            for j in range(i):
                if nums[i] > nums[j]:
                    if dp[j] + 1 > dp[i]:
                        dp[i] = dp[j] + 1
                        cnt[i] = cnt[j]
                    elif dp[j] + 1 == dp[i]:
                        cnt[i] += cnt[j]
            longest = max(longest, dp[i])
        ans = 0
        for i in range(n):
            if dp[i] == longest:
                ans += cnt[i]
        return ans
