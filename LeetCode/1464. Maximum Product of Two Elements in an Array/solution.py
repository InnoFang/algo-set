"""
104 / 104 test cases passed.
Status: Accepted
Runtime: 40 ms
"""
class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        nums.sort()
        return (nums[-1] - 1) * (nums[-2] - 1)

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
