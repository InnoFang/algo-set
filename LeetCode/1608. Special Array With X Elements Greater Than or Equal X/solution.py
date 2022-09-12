"""
98 / 98 test cases passed.
Runtime: 24 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def specialArray(self, nums: List[int]) -> int:
        nums.sort(reverse=True)
        n = len(nums)
        for i in range(1, n + 1):
            if i <= nums[i - 1] and (i == n or nums[i] < i):
                return i
        return -1
