"""
82 / 82 test cases passed.
Runtime: 52 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def flipAndInvertImage(self, A: List[List[int]]) -> List[List[int]]:
        return [map(lambda x : x ^ 1, row[::-1]) for row in A]
