"""
8 / 8 test cases passed.
Runtime: 188 ms
Memory Usage: 24.8 MB
"""
import random
class Solution:
    
    def __init__(self, radius: float, x_center: float, y_center: float):
        self.radius = radius
        self.x_center = x_center
        self.y_center = y_center

    def randPoint(self) -> List[float]:
        while True:
            x = random.uniform(-self.radius, self.radius)
            y = random.uniform(-self.radius, self.radius)
            if x * x + y * y <= self.radius * self.radius: 
                return [self.x_center + x, self.y_center + y]


# Your Solution object will be instantiated and called as such:
# obj = Solution(radius, x_center, y_center)
# param_1 = obj.randPoint()
