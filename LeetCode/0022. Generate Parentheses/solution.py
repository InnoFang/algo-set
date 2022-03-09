"""
8 / 8 test cases passed.
Runtime: 44 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        ans = []
        def dfs(s, l, r):
            if l == 0 and r == 0:
                ans.append(s[:])
            if l > 0:
                dfs(s + "(", l - 1, r)
            if l < r:
                dfs(s + ")", l, r - 1)
        dfs("", n, n)
        return ans
