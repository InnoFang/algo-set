"""
180 / 180 test cases passed.
Runtime: 44 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def frequencySort(self, nums: List[int]) -> List[int]:
        cnt = Counter(nums)
        nums.sort(key=lambda x: (cnt[x], -x))
        return nums
