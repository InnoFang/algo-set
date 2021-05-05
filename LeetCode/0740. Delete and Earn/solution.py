"""
47 / 47 test cases passed.
Runtime: 36 ms
Memory Usage: 15 MB
"""
class Solution:
    def deleteAndEarn(self, nums: List[int]) -> int:
        freq = [0] * (max(nums) + 1)
        for num in nums:
            freq[num] += num
        last, curr = 0, 0
        for cnt in freq:
            last, curr = curr, max(curr, last + cnt)
        return curr
