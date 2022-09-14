"""
50 / 50 test cases passed.
Runtime: 40 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def trimMean(self, arr: List[int]) -> float:
        arr.sort()
        n = len(arr)
        return sum(arr[n//20:-n//20]) / (n * 0.9)
    