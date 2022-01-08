"""
16 / 16 test cases passed.
Runtime: 32 ms
Memory Usage: 18.3 MB
"""
class Solution:
    def grayCode(self, n: int) -> List[int]:
        return [i ^ i>>1 for i in range(1 << n)]
