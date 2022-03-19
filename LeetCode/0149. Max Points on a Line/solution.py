"""
34 / 34 test cases passed.
Runtime: 60 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def maxPoints(self, points: List[List[int]]) -> int:
        n, ans = len(points), 0
        if n <= 2: return n

        for i in range(n - 1):
            if ans > n // 2: return ans

            cnt = collections.defaultdict(int)
            xi, yi = points[i][0], points[i][1]
            for j in range(i + 1, n):
                dx, dy = points[j][0] - xi, points[j][1] - yi
                if dx == 0: dy = 1
                elif dy == 0: dx = 1
                else:
                    if dy < 0:
                        dx, dy = -dx, -dy
                    g = math.gcd(abs(dy), abs(dx))
                    dx //= g
                    dy //= g
                key = str(dy) + "/" + str(dx)
                cnt[key] += 1
                ans = max(ans, cnt[key] + 1)
        return ans
