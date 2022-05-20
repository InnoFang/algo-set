"""
30 / 30 test cases passed.
Runtime: 40 ms
Memory Usage: 16 MB
"""
class Solution:
    def minMoves2(self, nums: List[int]) -> int:
        nums.sort()
        mid, ans = nums[len(nums) // 2], 0
        return sum(abs(num - mid) for num in nums)
