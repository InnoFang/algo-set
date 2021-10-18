"""
128 / 128 test cases passed.
Runtime: 28 ms
Memory Usage: 15 MB
"""
class Solution:
    def bitwiseComplement(self, n: int) -> int:
        if not n:
            return 1
            
        mask = n
        mask |= mask >> 1;
        mask |= mask >> 2;
        mask |= mask >> 4;
        mask |= mask >> 8;
        mask |= mask >> 16;
        return mask ^ n
