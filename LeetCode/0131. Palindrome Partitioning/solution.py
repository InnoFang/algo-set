"""
32 / 32 test cases passed.
Runtime: 148 ms
Memory Usage: 28.1 MB
"""
class Solution:
    def partition(self, s: str) -> List[List[str]]:
        n = len(s)
        self.dp = [[True] * n for _ in range(n)]
        self.ans = []
        self.path = []

        for i in range(n - 1, -1, -1):
            for j in range(i + 1, n):
                self.dp[i][j] = (s[i] == s[j]) and self.dp[i + 1][j - 1] 
        self.dfs(s, 0)
        return self.ans
    
    def dfs(self, s: str, i: int):
        if i == len(s):
            self.ans.append(self.path[:])
            return
        for j in range(i, len(s)):
            if self.dp[i][j]:
                self.path.append(s[i:j+1])
                self.dfs(s, j + 1)
                self.path.pop()
            