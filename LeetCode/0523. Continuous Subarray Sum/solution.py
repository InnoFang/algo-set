"""
94 / 94 test cases passed.
Runtime: 124 ms
Memory Usage: 32.8 MB
"""
class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        mp = { 0: -1 }
        s = 0
        for i, num in enumerate(nums):
            s = (s + num) % k
            if s in mp:
                if i - mp[s] >= 2:
                    return True
            else:
                mp[s] = i
        return False
