"""
60 / 60 test cases passed.
Runtime: 228 ms
Memory Usage: 25.4 MB
"""
class Solution:
    def maxArea(self, height: List[int]) -> int:
        l, r = 0, len(height) - 1
        ans = 0
        while l < r:
            h = min(height[l], height[r])
            w = r - l
            ans = max(ans, w * h)
            if height[l] < height[r]:
                l += 1
            else:
                r -= 1
        return ans
