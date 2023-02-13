"""
Runtime: 32 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        ans = pre = 0
        for g in gain:
            ans = max(ans, pre + g)
            pre += g
        return ans
