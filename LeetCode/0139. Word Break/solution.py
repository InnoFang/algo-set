"""
45 / 45 test cases passed.
Runtime: 56 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        wordDict = set(wordDict)
        memo = {}
        n = len(s)
        def dfs(start):
            if start == n:
                return True
            if start in memo:
                return memo[start]
            for i in range(start + 1, n + 1):
                pref = s[start:i]
                if pref in wordDict and dfs(i):
                    memo[start] = True
                    return True
            memo[start] = False
            return False
        return dfs(0)


"""
45 / 45 test cases passed.
Runtime: 40 ms
Memory Usage: 15.2 MB
"""
class Solution2:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        wordDict = set(wordDict)
        n = len(s)
        dp = [True] + [False] * n
        for i in range(1, n + 1):
            for j in range(i):
                if dp[j] and s[j:i] in wordDict:
                    dp[i] = True
                    break
        return dp[n]
