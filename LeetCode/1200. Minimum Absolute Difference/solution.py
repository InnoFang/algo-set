"""
37 / 37 test cases passed.
Runtime: 100 ms
Memory Usage: 25.7 MB
"""
class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        arr.sort()
        min_abs = float('inf')
        ans = []
        for i in range(len(arr) - 1):
            if (delta := arr[i + 1] - arr[i]) < min_abs:
                min_abs = delta
                ans = [[arr[i], arr[i + 1]]]
            elif delta == min_abs:
                ans.append([arr[i], arr[i + 1]])
        return ans
