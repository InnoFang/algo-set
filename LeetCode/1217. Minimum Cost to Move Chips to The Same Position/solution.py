"""
51 / 51 test cases passed.
Runtime: 48 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def minCostToMoveChips(self, position: List[int]) -> int:
        cnt = Counter(x & 1 for x in position)
        return min(cnt[0], cnt[1])
