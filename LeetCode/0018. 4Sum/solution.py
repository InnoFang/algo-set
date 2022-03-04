"""
289 / 289 test cases passed.
Runtime: 1056 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        ans = []
        n = len(nums)
        if n < 4:
            return ans
        
        nums.sort()
        for i in range(n - 3):
            if i > 0 and nums[i] == nums[i - 1]:
                continue
            for j in range(i + 1, n - 2):
                if j > i + 1 and nums[j] == nums[j - 1]:
                    continue
                l, r = j + 1, n - 1
                while l < r:
                    if nums[i] + nums[j] < target - nums[l] - nums[r]:
                        l += 1
                    elif nums[i] + nums[j] > target - nums[l] - nums[r]:
                        r -= 1
                    else:
                        ans.append([nums[i], nums[j], nums[l], nums[r]])
                        while l < r and nums[l] == nums[l + 1]:
                            l += 1
                        while l < r and nums[r] == nums[r - 1]:
                            r -= 1
                        l += 1
                        r -= 1
        return ans
