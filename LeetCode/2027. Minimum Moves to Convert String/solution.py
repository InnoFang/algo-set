"""
Runtime: 40 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def minimumMoves(self, s: str) -> int:
        move = 0
        cover = -1
        for i, c in enumerate(s):
            if c == 'X' and i > cover:
                move += 1
                cover = i + 2
        return move
        