"""
Runtime: 68 ms
Memory Usage: 18.1 MB
"""
class Solution:
    def nearestValidPoint(self, x: int, y: int, points: List[List[int]]) -> int:
        n = len(points)
        best, idx = float("inf"), -1
        for i, (px, py) in enumerate(points):
            if x == px:
                d = abs(y - py)
                if d < best:
                    best = d
                    idx = i
            elif y == py:
                d = abs(x - px)
                if d < best:
                    best = d
                    idx = i

        return idx
