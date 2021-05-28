"""
46 / 46 test cases passed.
Runtime: 360 ms
Memory Usage: 15.7 MB
"""
class Solution:
    def totalHammingDistance(self, nums: List[int]) -> int:
        n = len(nums)
        ans = 0
        for i in range(30):
            c = 0
            for num in nums:
                c += (num >> i) & 1
            ans += c * (n - c)
        return ans

