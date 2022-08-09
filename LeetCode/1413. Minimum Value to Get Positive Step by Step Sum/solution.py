"""
55 / 55 test cases passed.
Runtime: 28 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def minStartValue(self, nums: List[int]) -> int:
        ans, acc = 1, 1
        for num in nums:
            if acc + num <= 0:
                diff = -(acc + num) + 1
                ans += diff
                acc += diff
            acc += num
        return ans
