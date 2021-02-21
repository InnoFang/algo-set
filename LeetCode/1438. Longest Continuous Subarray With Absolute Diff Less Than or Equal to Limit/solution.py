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

"""
56 / 56 test cases passed.
Runtime: 292 ms
Memory Usage: 21.5 MB
"""
import collections
class Solution2:
    def longestSubarray(self, nums: List[int], limit: int) -> int:
        l = r = ans = 0
        min_q = collections.deque()
        max_q = collections.deque()
        for num in nums:
            while min_q and num < min_q[-1]:
                min_q.pop()
            while max_q and num > max_q[-1]:
                max_q.pop()
            min_q.append(num)
            max_q.append(num)
            r += 1
            while max_q[0] - min_q[0] > limit:
                if max_q[0] == nums[l]:
                    max_q.popleft()
                if min_q[0] == nums[l]:
                    min_q.popleft()
                l += 1
            ans = max(ans, r - l)
        return ans
