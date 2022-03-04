"""
987 / 987 test cases passed.
Runtime: 60 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        l, ans = 0, 0
        store = {}
        for r, c in enumerate(s):
            if c in store and store[c] >= l:
                l = store[c] + 1
            ans = max(ans, r - l + 1)
            store[c] = r
        return ans
