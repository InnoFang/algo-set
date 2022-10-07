"""
104 / 104 test cases passed.
Runtime: 36 ms
Memory Usage: 15 MB
"""
class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        ans = total = 0
        for i, num in enumerate(nums):
            if i == 0 or num > nums[i - 1]:
                total += num
            else:
                total = num
            ans = max(ans, total)
        return ans
