"""
48 / 48 test cases passed.
Runtime: 632 ms
Memory Usage: 15.3 MB
"""
class Solution:
    def longestOnes(self, A: List[int], K: int) -> int:
        l, r = 0, 0
        while r < len(A):
            K -= A[r] ^ 1
            if K < 0:
                K += A[l] ^ 1
                l += 1
            r += 1
        return r - l
