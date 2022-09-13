"""
111 / 111 test cases passed.
Runtime: 36 ms
Memory Usage: 14.7 MB
"""
class Solution:
    def maximumSwap(self, num: int) -> int:
        ans = num
        s = list(str(num))
        for i in range(len(s)):
            for j in range(i):
                s[i], s[j] = s[j], s[i]
                ans = max(ans, int(''.join(s)))
                s[i], s[j] = s[j], s[i]
        return ans
