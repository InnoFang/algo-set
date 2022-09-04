"""
95 / 95 test cases passed.
Runtime: 36 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def numSpecial(self, mat: List[List[int]]) -> int:
        row_sum = [sum(row) for row in mat]
        col_sum = [sum(col) for col in zip(*mat)]
        ans = 0
        for i, row in enumerate(mat):
            for j, x in enumerate(row):
                if x == 1 and row_sum[i] == 1 and col_sum[j] == 1:
                    ans += 1
        return ans
