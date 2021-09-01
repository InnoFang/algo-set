"""
81 / 81 test cases passed.
Runtime: 32 ms
Memory Usage: 15 MB
"""
class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        for v1, v2 in zip_longest(version1.split('.'), version2.split('.'), fillvalue=0):
            x, y = int(v1), int(v2)
            if x != y:
                return 1 if x > y else -1
        return 0
