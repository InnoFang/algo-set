"""
35 / 35 test cases passed.
Runtime: 276 ms
Memory Usage: 42.5 MB
"""
class Solution:
    def platesBetweenCandles(self, s: str, queries: List[List[int]]) -> List[int]:
        n = len(s)
        left, right, psum = [0] * n, [0] * n, [0] * n
        l, r, p = -1, -1, 0
        for i in range(n):
            if s[i] == '|': l = i
            if s[n - 1 - i] == '|': r = n - 1 - i
            if s[i] == '*': p += 1
            left[i], right[n - 1 - i], psum[i] = l, r, p
        ans = []
        for query in queries:
            x, y = right[query[0]], left[query[1]]
            ans.append(0 if x == -1 or y == -1 or x >= y else psum[y] - psum[x])
        return ans
