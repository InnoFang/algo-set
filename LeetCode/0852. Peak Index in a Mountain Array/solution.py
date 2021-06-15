"""
34 / 34 test cases passed.
Runtime: 28 ms
Memory Usage: 15.6 MB
"""
class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        l, r = 1, len(arr) - 1
        while l < r:
            mid = l + r + 1 >> 1
            if arr[mid - 1] < arr[mid]:
                l = mid
            else:
                r = mid - 1
        return l
