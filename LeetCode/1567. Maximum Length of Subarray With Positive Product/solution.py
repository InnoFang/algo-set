"""
112 / 112 test cases passed.
Runtime: 136 ms
Memory Usage: 26.1 MB
"""
class Solution:
    def getMaxLen(self, nums: List[int]) -> int:
        ans = pos = neg = 0
        for num in nums:
            if num > 0:
                pos += 1
                if neg > 0 :neg += 1
            elif num < 0:
                new_neg = pos + 1
                new_pos = neg + 1 if neg > 0 else 0
                pos, neg = new_pos, new_neg
            else:
                pos = neg = 0
            ans = max(ans, pos)
        return ans
