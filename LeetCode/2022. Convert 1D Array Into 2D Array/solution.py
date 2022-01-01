"""
107 / 107 test cases passed.
Runtime: 88 ms
Memory Usage: 19.8 MB
"""
class Solution:
    def construct2DArray(self, original: List[int], m: int, n: int) -> List[List[int]]:
        if len(original) != m * n:
            return []
        mat = [[0] * n for _ in range(m)]
        for i in range(m):
            for j in range(n):
                mat[i][j] = original[i * n + j]
        return mat
    
"""
107 / 107 test cases passed.
Runtime: 56 ms
Memory Usage: 19.8 MB
"""
class Solution2:
    def construct2DArray(self, original: List[int], m: int, n: int) -> List[List[int]]:
        return [original[i:i+n] for i in range(0, len(original), n)] if len(original) == m * n else []
