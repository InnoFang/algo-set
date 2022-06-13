"""
81 / 81 test cases passed.
Runtime: 40 ms
Memory Usage: 14.7 MB
"""
class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        return sum(x != y for x, y in zip(heights, sorted(heights)))
