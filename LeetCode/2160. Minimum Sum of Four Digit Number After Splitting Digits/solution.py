"""
Runtime: 44 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def minimumSum(self, num: int) -> int:
        s = sorted(str(num))
        ans = 0
        for i in range(0, len(s), 2):
            ans *= 10
            ans += int(s[i]) + int(s[i + 1])
        return ans
