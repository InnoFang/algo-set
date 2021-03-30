"""
133 / 133 test cases passed.
Runtime: 56 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        m, n = len(matrix), len(matrix[0])
        l, r = 0, m * n - 1
        while l < r:
            mid = (l + r + 1) >> 1
            if matrix[mid // n][mid % n] <= target:
                l = mid
            else:
                r = mid - 1
        return matrix[r // n][r % n] == target
