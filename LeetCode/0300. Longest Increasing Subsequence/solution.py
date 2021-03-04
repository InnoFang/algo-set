"""
54 / 54 test cases passed.
Runtime: 40 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        record = [nums[0]]
        for num in nums[1:]:
            if num > record[-1]:
                record.append(num)
            else:
                record[ bisect.bisect_left(record, num) ] = num
        return len(record)
