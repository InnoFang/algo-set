"""
Runtime: 56 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def differenceOfSum(self, nums: List[int]) -> int:
        a = b = 0
        for num in nums:
            a += num
            while num > 0:
                b += num % 10
                num //= 10
        return abs(a - b)
    