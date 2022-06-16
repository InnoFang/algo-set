"""
60 / 60 test cases passed.
Runtime: 36 ms
Memory Usage: 15 MB
"""
class Solution:
    def findPairs(self, nums: List[int], k: int) -> int:
        if k < 0:
            return 0
        rec, diff = set(), set()
        for num in nums:
            if num + k in rec:
                diff.add(num)
            if num - k in rec:
                diff.add(num - k)
            rec.add(num)
        return len(diff)
