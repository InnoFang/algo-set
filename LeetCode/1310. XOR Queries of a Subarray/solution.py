"""
42 / 42 test cases passed.
Runtime: 416 ms
Memory Usage: 29.2 MB
"""
class Solution:
    def xorQueries(self, arr: List[int], queries: List[List[int]]) -> List[int]:
        xors = [0] + list(accumulate(arr, xor))
        return [xors[i] ^ xors[j + 1] for i, j in queries]

