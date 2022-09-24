"""
74 / 74 test cases passed.
Runtime: 36 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def decrypt(self, code: List[int], k: int) -> List[int]:
        n = len(code)
        ans = [0] * n
        if k == 0:
            return ans
        psum = [0] * (2 * n + 1)
        for i in range(1, len(psum)):
            psum[i] = psum[i - 1] + code[(i - 1) % n]
        for i in range(1, n + 1):
            ans[i - 1] = psum[i + n - 1] - psum[i + n + k - 1] if k < 0 else psum[i + k] - psum[i]
        return ans
