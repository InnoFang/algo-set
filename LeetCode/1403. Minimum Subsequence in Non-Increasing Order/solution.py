"""
103 / 103 test cases passed.
Runtime: 40 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def minSubsequence(self, nums: List[int]) -> List[int]:
        nums.sort(reverse=True)
        total, s = sum(nums), 0
        for i, num in enumerate(nums):
            s += num
            if s > total - s:
                return nums[:i+1]
