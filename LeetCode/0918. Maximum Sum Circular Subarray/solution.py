"""
111 / 111 test cases passed.
Runtime: 188 ms
Memory Usage: 18.4 MB
"""
class Solution:
    def maxSubarraySumCircular(self, nums: List[int]) -> int:
        max_sum = min_sum = nums[0]
        total = maxn = minn = 0
        for num in nums:
            maxn = max(maxn + num, num)
            max_sum = max(max_sum, maxn)
            minn = min(minn + num, num)
            min_sum = min(min_sum, minn)
            total += num
        return max(max_sum, total - min_sum) if max_sum > 0 else max_sum
