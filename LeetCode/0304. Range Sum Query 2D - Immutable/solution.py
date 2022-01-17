"""
24 / 24 test cases passed.
Runtime: 608 ms
Memory Usage: 25.1 MB
"""
class NumMatrix:
    
    def __init__(self, matrix: List[List[int]]):
        m, n = len(matrix), len(matrix[0])
        pre_sum_2d = [[0] * (n + 1) for _ in range(m + 1)]
        for i in range(m):
            for j in range(n):
                pre_sum_2d[i + 1][j + 1] = matrix[i][j] + pre_sum_2d[i + 1][j] + pre_sum_2d[i][j + 1] - pre_sum_2d[i][j]
        self.pre_sum_2d = pre_sum_2d

    def sumRegion(self, row1: int, col1: int, row2: int, col2: int) -> int:
        return self.pre_sum_2d[row2 + 1][col2 + 1] - self.pre_sum_2d[row2 + 1][col1] - self.pre_sum_2d[row1][col2 + 1] + self.pre_sum_2d[row1][col1]



# Your NumMatrix object will be instantiated and called as such:
# obj = NumMatrix(matrix)
# param_1 = obj.sumRegion(row1,col1,row2,col2)
