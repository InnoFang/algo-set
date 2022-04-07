"""
47 / 47 test cases passed.
Runtime: 48 ms
Memory Usage: 15 MB
"""
class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        return len(s) == len(goal) and goal in s + s
