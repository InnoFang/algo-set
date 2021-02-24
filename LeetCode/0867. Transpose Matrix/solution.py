"""
36 / 36 test cases passed.
Runtime: 36 ms
Memory Usage: 15 MB
"""
class Solution:
    def transpose(self, matrix: List[List[int]]) -> List[List[int]]:
        return list(zip(*matrix))
