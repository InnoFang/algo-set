"""
63 / 63 test cases passed.
Runtime: 168 ms
Memory Usage: 30.8 MB
"""
class Solution:
    def decode(self, encoded: List[int]) -> List[int]:
        first = reduce(xor, encoded[1::2] + list(range(1, len(encoded) + 2)))
        return list(accumulate(encoded, xor, initial=first))

