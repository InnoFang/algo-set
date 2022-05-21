"""
102 / 102 test cases passed.
Runtime: 40 ms
Memory Usage: 16.1 MB
"""
class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:
        arr = [0] * 10010
        for num in nums:
            arr[num] += 1
            if arr[num] > 1:
                return num
        return -1
