"""
Runtime: 860 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def countPoints(self, points: List[List[int]], queries: List[List[int]]) -> List[int]:
        calc = lambda x, y, r, i, j: 1 if (x - i) * (x - i) + (y - j) * (y - j) <= r * r else 0
        return [sum(calc(x, y, r, i, j) for i, j in points) for x, y, r in queries]
