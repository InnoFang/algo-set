"""
85 / 85 test cases passed.
Runtime: 156 ms
Memory Usage: 15.7 MB
"""
class Solution:
    def minDeletionSize(self, strs: List[str]) -> int:
        n = len(strs[0])
        rec = set()
        for i in range(1, len(strs)):
            for j in range(n):
                if j not in rec and strs[i][j] < strs[i - 1][j]:
                    rec.add(j)
            if len(rec) == n:
                return n
        return len(rec)
