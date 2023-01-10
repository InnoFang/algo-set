"""
Runtime: 32 ms
Memory Usage: 15 MB
"""
class Solution:
    def arithmeticTriplets(self, nums: List[int], diff: int) -> int:
        ans, rec = 0, set()
        for num in nums:
            if (num - 2 * diff) in rec and (num - diff) in rec:
                ans += 1
            rec.add(num)
        return ans
       
