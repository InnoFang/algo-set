"""
106 / 106 test cases passed.
Runtime: 48 ms
Memory Usage: 15.5 MB
"""
class Solution:
    def jump(self, nums: List[int]) -> int:
        farthest, ans, end = 0, 0, 0
        for i, num in enumerate(nums[:-1]):
            farthest = max(farthest, i + num)
            if i == end:
                end = farthest
                ans += 1
        return ans
