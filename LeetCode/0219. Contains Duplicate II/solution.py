"""
23 / 23 test cases passed.
Runtime: 48 ms
Memory Usage: 22.3 MB
"""
class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        store = {}
        for i, num in enumerate(nums):
            if num in store and i - store[num] <= k:
                return True
            store[num] = i
        return False
