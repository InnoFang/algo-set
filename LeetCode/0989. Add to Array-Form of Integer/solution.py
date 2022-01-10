"""
156 / 156 test cases passed.
Status: Accepted
Runtime: 416 ms
"""
class Solution:
    def addToArrayForm(self, A: List[int], K: int) -> List[int]:
        a = reduce(lambda acc, n: acc * 10 + n, A)
        ans = a + K
        return list(str(ans))
