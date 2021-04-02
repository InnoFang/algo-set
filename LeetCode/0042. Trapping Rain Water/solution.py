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

"""
320 / 320 test cases passed.
Runtime: 48 ms
Memory Usage: 15.9 MB
"""
class Solution2:
    def trap(self, height: List[int]) -> int:
        size = len(height)
        if size <= 2:
            return 0

        left_height = [height[0]] * size
        for i in range(1, size):
            left_height[i] = max(left_height[i - 1], height[i])
        
        right_height = [height[-1]] * size
        for i in range(size - 2, -1, - 1):
            right_height[i] = max(right_height[i + 1], height[i])

        ans = 0 
        for i in range(1, size):
            ans += min(left_height[i], right_height[i]) - height[i]
        return ans
