"""
26 / 26 test cases passed.
Runtime: 36 ms
Memory Usage: 15 MB
"""
class Solution:
    def lengthLongestPath(self, input: str) -> int:
        ans = 0
        level_depth = {-1: 0}
        for path in input.split('\n'):
            depth = path.count('\t')
            level_depth[depth] = level_depth[depth - 1] + len(path) - depth
            if '.' in path:
                ans = max(ans, level_depth[depth] + depth)
        return ans
