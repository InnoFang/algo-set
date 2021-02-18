"""
56 / 56 test cases passed.
Runtime: 816 ms
Memory Usage: 15.8 MB
"""
import collections
class Solution:
    def minKBitFlips(self, A: List[int], K: int) -> int:
        ans = 0
        flip = collections.deque()
        for i in range(len(A)):
            if flip and flip[0] + K == i:
                flip.popleft()
            if (len(flip) + A[i]) % 2 == 0:
                if i + K > len(A):
                    return -1
                ans += 1
                flip.append(i)
        return ans
