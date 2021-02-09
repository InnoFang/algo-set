"""
89 / 89 test cases passed.
Status: Accepted
Runtime: 176 ms
"""
class Solution:
    def maxTurbulenceSize(self, arr: List[int]) -> int:
        sz = len(arr)
        if sz < 2:
            return sz

        ans, l = 0, 0
        turbulence = arr[1] > arr[0]
        for r in range(1, sz):
            current = arr[r] > arr[r - 1]
            if current == turbulence:
                l = r - 1
            if arr[r] == arr[r - 1]:
                l = r
            turbulence = current
            ans = max(ans, r - l + 1)
        return ans
