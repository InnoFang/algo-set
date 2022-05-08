"""
28 / 28 test cases passed.
Runtime: 96 ms
Memory Usage: 21.1 MB
"""
class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        ans = []
        for num in nums:
            num = abs(num)
            if nums[num - 1] < 0:
                ans.append(num)
            else:
                nums[num - 1] *= -1
        return ans
