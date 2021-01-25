"""
36 / 36 test cases passed.
Status: Accepted
Runtime: 56 ms
"""
class Solution:
    def findLengthOfLCIS(self, nums: List[int]) -> int:
        start, ans = 0, 0
        for i in range(len(nums)):
            if i > 0 and nums[i] <= nums[i-1]:
                start = i
            ans = max(ans, i - start + 1)
        return ans
    
