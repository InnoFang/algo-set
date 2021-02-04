"""
123 / 123 test cases passed.
Status: Accepted
Runtime: 916 ms
"""
class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        sumk = sum(nums[:k])
        max_aveg = sumk / k
        for i, j in zip(nums[:-k], nums[k:]):
            sumk = sumk - i + j
            max_aveg = max(max_aveg, sumk / k)
        return max_aveg
