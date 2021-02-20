"""
56 / 56 test cases passed.
Runtime: 92 ms
Memory Usage: 16 MB
"""
class Solution:
    def findShortestSubArray(self, nums: List[int]) -> int:
        recore = dict()
        max_freq = 1
        for i, num in enumerate(nums):
            if num not in recore:
                recore[num] = [1, i, i]
            else:
                recore[num][0] += 1;
                recore[num][2] = i;
                max_freq = max(max_freq, recore[num][0])
        ans = len(nums)
        for item in recore.values():
            if item[0] == max_freq:
               ans = min(ans, item[2] - item[1] + 1) 
        return ans
