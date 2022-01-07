"""
167 / 67 test cases passed.
Runtime: 36 ms
Memory Usage: 15 MB
"""
class Solution:
    def maxDepth(self, s: str) -> int:
        max_depth, depth = 0, 0
        for c in s:
            if c == '(':
                depth += 1
                max_depth = max(max_depth, depth)
            elif c == ')':
                depth -= 1
        return max_depth
