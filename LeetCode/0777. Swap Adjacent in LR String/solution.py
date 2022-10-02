"""
94 / 94 test cases passed.
Runtime: 48 ms
Memory Usage: 15 MB
"""
class Solution:
    def canTransform(self, start: str, end: str) -> bool:
        n, i, j = len(start), 0, 0
        while True:
            while i < n and start[i] == 'X':
                i += 1
            while j < n and end[j] == 'X':
                j += 1
            if i == n and j == n:
                return True
            if i == n or j == n or start[i] != end[j]:
                return False
            if start[i] == 'L' and i < j:
                return False
            if start[i] == 'R' and i > j:
                return False
            i += 1
            j += 1
        return True
