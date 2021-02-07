"""
335 / 335 test cases passed.
Status: Accepted
Runtime: 40 ms
"""
class Solution:
    def checkPossibility(self, nums: List[int]) -> bool:
        cnt = 0
        for i in range(1, len(nums)):
            if nums[i - 1] > nums[i]:
                cnt += 1
                if cnt > 1:
                    return False
                if i - 2 >= 0 and nums[i - 2] > nums[i]:
                    nums[i] = nums[i - 1]
                else:
                    nums[i - 1] = nums[i]
        return True
