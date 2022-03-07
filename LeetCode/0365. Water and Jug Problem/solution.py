"""
28 / 28 test cases passed.
Runtime: 36 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def canMeasureWater(self, x: int, y: int, z: int) -> bool:
        if x + y < z: return False
        if x == 0 or y == 0: return z == 0 or x + y == z
        return z % math.gcd(x, y) == 0
        