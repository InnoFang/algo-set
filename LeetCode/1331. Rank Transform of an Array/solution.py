"""
38 / 38 test cases passed.
Runtime: 92 ms
Memory Usage: 36.1 MB
"""
class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        rec = {v: i for i, v in enumerate(sorted(set(arr)))}
        return [rec[v] + 1 for v in arr]
