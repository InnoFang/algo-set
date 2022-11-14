"""
Runtime: 36 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def decompressRLElist(self, nums: List[int]) -> List[int]:
        ans = []
        for i in range(0, len(nums), 2):
            ans.extend(nums[i] * [nums[i + 1]])
        return ans
