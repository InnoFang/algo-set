"""
57 / 57 test cases passed.
Runtime: 104 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def largestTriangleArea(self, points: List[List[int]]) -> float:
        def triangleArea(x1, y1, x2, y2, x3, y3):
            return abs(x1 * y2 + x2 * y3 + x3 * y1 - x1 * y3 - x2 * y1 - x3 * y2) / 2
        return max(triangleArea(x1, y1, x2, y2, x3, y3) for (x1, y1), (x2, y2), (x3, y3) in combinations(points, 3))
