"""
114 / 114 test cases passed.
Runtime: 200 ms
Memory Usage: 25.7 MB
"""
class Solution:
    def minDeletion(self, nums: List[int]) -> int:
        stk = [nums[0]]
        ans = 0
        for num in nums[1:]:
            if (len(stk) + 1) % 2 == 0 and num == stk[-1]:
                ans += 1
            else:
                stk.append(num)   
        if len(stk) % 2 != 0:
            ans += 1
            stk.pop()
        return ans    
