"""
Runtime: 40 ms
Memory Usage: 15 MB
"""
class Solution:
    def minMaxGame(self, nums: List[int]) -> int:
        n = len(nums)
        if n == 1:
            return nums[0]
        new_nums = [0] * (n >> 1)
        for i in range(n >> 1):
            if i % 2 == 0:
                new_nums[i] = min(nums[i * 2], nums[i * 2 + 1])
            else:
                new_nums[i] = max(nums[i * 2], nums[i * 2 + 1])
        return self.minMaxGame(new_nums)
