"""
104 / 104 test cases passed.
Status: Accepted
Runtime: 40 ms
"""
class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        sorted_nums = sorted(nums)
        return (sorted_nums[-1] - 1) * (sorted_nums[-2] - 1)

"""
104 / 104 test cases passed.
Status: Accepted
Runtime: 44 ms
"""
class Solution2:
    def maxProduct(self, nums: List[int]) -> int:
        maximun = max(nums)
        nums.remove(maximun)
        return (maximun - 1) * (max(nums) - 1)
