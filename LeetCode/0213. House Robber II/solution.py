"""
74 / 74 test cases passed.
Runtime: 32 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def rob(self, nums: List[int]) -> int:
        if not nums:
            return 0
        if len(nums) == 1:
            return nums[0]
        def rob_range(sub_nums):
            last, curr = 0, 0
            for num in sub_nums:
                last, curr = curr, max(curr, last + num)
            return curr
        return max(rob_range(nums[1:]), rob_range(nums[:-1]))
