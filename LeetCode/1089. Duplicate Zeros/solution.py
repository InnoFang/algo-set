"""
30 / 30 test cases passed.
Runtime: 44 ms
Memory Usage: 15.3 MB
"""
class Solution:
    def duplicateZeros(self, arr: List[int]) -> None:
        """
        Do not return anything, modify arr in-place instead.
        """
        i, j, n = 0, 0, len(arr)
        while j < n:
            if arr[i] == 0:
                j += 1
            i += 1
            j += 1
        i -= 1
        j -= 1
        while i >= 0:
            if j < n:
                arr[j] = arr[i]
            if arr[i] == 0:
                j -= 1
                if j >= 0:
                    arr[j] = 0
            i -= 1
            j -= 1
