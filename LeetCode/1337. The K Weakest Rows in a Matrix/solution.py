"""
229 / 229 test cases passed.
Runtime: 40 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        store = dict()
        for idx, elm in enumerate(nums):
            if (target - elm) in store:
                return [store[target - elm], idx]
            store[elm] = idx
    
