"""
54 / 54 test cases passed.
Runtime: 36 ms
Memory Usage: 14.9 MB
"""
from functools import reduce
from operator import xor
class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        return reduce(xor, [start + 2 * i for i in range(n)])
