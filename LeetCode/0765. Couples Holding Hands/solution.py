"""
56 / 56 test cases passed.
Status: Accepted
Runtime: 36 ms
"""
class Solution:
    def minSwapsCouples(self, row: List[int]) -> int:
        n = len(row)
        p = [i for i in range(n)]

        def find(x):
            if p[x] != x:
                p[x] = find(p[x])
            return p[x]

        def union(a, b):
            p[find(a)] = p[find(b)]

        for i in range(0, n, 2):
            union(row[i] // 2, row[i + 1] // 2)

        cnt = 0
        for i in range(n // 2):
            if find(i) == i:
                cnt += 1
        return n // 2 - cnt
