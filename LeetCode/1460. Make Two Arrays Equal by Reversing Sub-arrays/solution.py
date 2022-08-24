"""
106 / 106 test cases passed.
Runtime: 48 ms
Memory Usage: 15 MB
"""
class Solution:
    def canBeEqual(self, target: List[int], arr: List[int]) -> bool:
        return Counter(target) == Counter(arr)
   