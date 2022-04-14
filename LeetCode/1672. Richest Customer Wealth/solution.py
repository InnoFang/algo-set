"""
34 / 34 test cases passed.
Runtime: 32 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        return max(sum(account) for account in accounts)
