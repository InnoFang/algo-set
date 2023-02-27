"""
Runtime: 40 ms
Memory Usage: 15 MB
"""
class Solution:
    def leftRigthDifference(self, nums: List[int]) -> List[int]:
        left_sum, right_sum = 0, sum(nums)
        for i, num in enumerate(nums):
            right_sum -= num
            nums[i] = abs(left_sum - right_sum)
            left_sum += num
        return nums
