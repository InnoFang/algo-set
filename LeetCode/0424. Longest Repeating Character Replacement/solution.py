"""
37 / 37 test cases passed.
Status: Accepted
Runtime: 100 ms
"""
class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        defq = defaultdict(int)
        ans, l, r, max_same = 0, 0, 0, 0
        while r < len(s):
            defq[s[r]] += 1
            max_same = max(max_same, defq[s[r]])
            if r - l + 1 - max_same > k:
                defq[s[l]] -= 1
                l += 1
            r += 1
        return r - l
