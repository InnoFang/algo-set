"""
14 / 14 test cases passed.
Runtime: 100 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        return Counter(nums).most_common()[-1][0]
