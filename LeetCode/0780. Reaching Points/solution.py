"""
195 / 195 test cases passed.
Runtime: 44 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def reachingPoints(self, sx: int, sy: int, tx: int, ty: int) -> bool:
        while tx >= sx and ty >= sy:
            if tx == sx and ty == sy:
                return True
            if tx > ty:
                tx -= max((tx - sx) // ty, 1) * ty
            else:
                ty -= max((ty - sy) // tx, 1) * tx
        return False
