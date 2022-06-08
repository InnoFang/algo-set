"""
121 / 121 test cases passed.
Runtime: 396 ms
Memory Usage: 16.3 MB
"""
class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        check = lambda k : sum(math.ceil(p / k) for p in piles) <= h
        l, r = 1, int(1e9)
        while l < r:
            mid = l + (r - l) // 2
            if check(mid):
                r = mid
            else:
                l = mid + 1
        return r
