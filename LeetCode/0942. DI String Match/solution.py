"""
95 / 95 test cases passed.
Runtime: 52 ms
Memory Usage: 95 MB
"""
class Solution:
    def diStringMatch(self, s: str) -> List[int]:
        lo, hi = 0, len(s)
        ans = [0] * (hi + 1)
        for i, c in enumerate(s):
            if c == 'I':
                ans[i] = lo
                lo += 1
            else:
                ans[i] = hi
                hi -= 1
        ans[-1] = lo
        return ans
