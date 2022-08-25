"""
66 / 66 test cases passed.
Runtime: 72 ms
Memory Usage: 16.1 MB
"""
class Solution:
    def findClosestElements(self, arr: List[int], k: int, x: int) -> List[int]:
        right = bisect.bisect_left(arr, x)
        left = right - 1
        while (k := k - 1) >= 0:
            if left < 0:
                right += 1
            elif right >= len(arr) or x - arr[left] <= arr[right] - x:
                left -= 1
            else:
                right += 1
        return arr[left + 1:right]  
