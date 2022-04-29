"""
121 / 121 test cases passed.
Runtime: 32 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def countHillValley(self, nums: List[int]) -> int:
        stk = [nums[0], nums[1]]
        ans = 0
        for num in nums[2:]:
            if num == stk[-1]:
                continue
            if stk[-2] < stk[-1] and stk[-1] > num:
                ans += 1
            elif stk[-2] > stk[-1] and stk[-1] < num:
                ans += 1
            stk.append(num)
        return ans
