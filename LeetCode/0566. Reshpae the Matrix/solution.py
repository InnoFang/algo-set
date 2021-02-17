"""
56 / 56 test cases passed.
Runtime: 100 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def matrixReshape(self, nums: List[List[int]], r: int, c: int) -> List[List[int]]:
        return nums if len(nums) * len(nums[0]) != r * c else zip(*[iter(i for row in nums for i in row)] * c)
