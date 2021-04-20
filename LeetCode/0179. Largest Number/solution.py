"""
229 / 229 test cases passed.
Runtime: 40 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def largestNumber(self, nums: List[int]) -> str:
        from functools import cmp_to_key
        cmp = lambda a, b: int(b + a) - int(a + b)
        ans = sorted(map(str, nums), key=cmp_to_key(cmp))
        return '0' if ans[0] == '0' else ''.join(ans)
