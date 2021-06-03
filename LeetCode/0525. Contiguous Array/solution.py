"""
564 / 564 test cases passed.
Runtime: 236 ms
Memory Usage: 19.6 MB
"""
class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        mp = { 0:-1 }
        ans, s = 0, 0
        for i, num in enumerate(nums):
            s += 1 if num == 1 else -1
            if s in mp:
                ans = max(ans, i - mp[s])
            else:
                mp[s] = i
        return ans
                
