"""
56 / 56 test cases passed.
Runtime: 52 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def countTriplets(self, arr: List[int]) -> int:
        xors = [0] + list(accumulate(arr, xor))
        ans = 0
        for i in range(len(arr)):
            for k in range(i + 1, len(arr)):
                if xors[i] == xors[k + 1]:
                    ans += k - i
        return  ans
