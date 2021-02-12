"""
34 / 34 test cases passed.
Status: Accepted
Runtime: 464 ms
"""
class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        for num in nums:
            nums[(num - 1) % len(nums)] += len(nums)
        return [i + 1 for i in range(len(nums)) if nums[i] <= len(nums)]

"""
34 / 34 test cases passed.
Status: Accepted
Runtime: 412 ms
"""
class Solution2:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        for num in nums:
            nums[(num - 1) % len(nums)] += len(nums)
        return filter(lambda i: nums[i - 1] <= len(nums), range(1, len(nums) + 1))
