"""
76 / 76 test cases passed.
Runtime: 52 ms
Memory Usage: 16.1 MB
"""
from itertools import accumulate
from operator import xor
class Solution:
    def decode(self, encoded: List[int], first: int) -> List[int]:
        return list(accumulate([first] + encoded, xor))

