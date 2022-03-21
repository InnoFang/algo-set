"""
97 / 97 test cases passed.
Runtime: 136 ms
Memory Usage: 17.1 MB
"""
class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        if k <= 1: return 0
        prod = 1
        ans = l = 0
        for r, num in enumerate(nums):
            prod *= num
            while prod >= k:
                prod /= nums[l]
                l += 1
            ans += r - l + 1
        return ans
                