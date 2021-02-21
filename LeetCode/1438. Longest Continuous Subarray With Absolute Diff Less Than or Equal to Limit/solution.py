"""
56 / 56 test cases passed.
Runtime: 1168 ms
Memory Usage: 21.5 MB
"""
import bisect
class Solution:
    def longestSubarray(self, nums: List[int], limit: int) -> int:
        sorted_list = []
        ans, l = 0, 0
        for r, num in enumerate(nums):
            bisect.insort(sorted_list, num)
            while sorted_list[-1] - sorted_list[0] > limit:
                sorted_list.pop(bisect.bisect_left(sorted_list, nums[l]))
                l += 1
            ans = max(ans, r - l + 1)
        return ans
