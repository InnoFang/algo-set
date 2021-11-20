"""
206 / 206 test cases passed.
Runtime: 296 ms
Memory Usage: 16.5 MB
"""
class Solution:
    def findLHS(self, nums: List[int]) -> int:
        count = defaultdict(int)
        for num in nums: 
            count[num] += 1
        ans = 0
        for key in count:
            if key + 1 in count:
                ans = max(ans, count[key] + count[key + 1])
        return ans
