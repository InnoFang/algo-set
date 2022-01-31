"""
204 / 204 test cases passed.
Runtime: 40 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def numberOfSteps(self, num: int) -> int:
        step = 0
        while num > 0:
            num = num - 1 if num & 1 else num >> 1
            step += 1
        return step
