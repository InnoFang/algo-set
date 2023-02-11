"""
Runtime: 28 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def fillCups(self, amount: List[int]) -> int:
        amount.sort()
        x, y, z = amount
        if x + y <= z:
            return z
        return (x + y + z + 1) // 2
