"""
Runtime: 32 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        bound = max(candies) - extraCandies
        return [candy >= bound for candy in candies]
