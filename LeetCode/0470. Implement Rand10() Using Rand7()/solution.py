"""
12 / 12 test cases passed.
Runtime: 312 ms
Memory Usage: ：17.4 MB
"""
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        store = dict()
        for idx, elm in enumerate(nums):
            if (target - elm) in store:
                return [store[target - elm], idx]
            store[elm] = idx
    
