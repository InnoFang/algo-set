"""
320 / 320 test cases passed.
Runtime: 48 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def trap(self, height: List[int]) -> int:
        size = len(height)
        if size <= 2:
            return 0

        black = sum(height)
        area, hi = 0, 1
        l, r = 0, size - 1
        while l <= r:
            while l <= r and height[l] < hi:
                l += 1
            while l <= r and height[r] < hi:
                r -= 1
            hi += 1
            area += r - l + 1
        return area - black