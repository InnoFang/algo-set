"""
41 / 41 test cases passed.
Status: Accepted
Runtime: 380 ms
"""
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        store = dict()
        for idx, elm in enumerate(nums):
            if (target - elm) in store:
                return [store[target - elm], idx]
            store[elm] = idx
    
