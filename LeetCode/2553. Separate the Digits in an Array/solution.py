"""
Runtime: 36 ms
Memory Usage: 15.2 MB 
"""
class Solution:
    def separateDigits(self, nums: List[int]) -> List[int]:
        ans = []
        for num in nums[::-1]:
            while num > 0:
                ans.append(num % 10)
                num //= 10
        return ans[::-1]
