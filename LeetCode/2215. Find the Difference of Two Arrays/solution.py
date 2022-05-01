"""
202 / 202 test cases passed.
Runtime: 52 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        rec1 = set(nums1)
        rec2 = set(nums2)
        ans = [[], []]
        for num in rec1:
            if num not in rec2:
                ans[0].append(num)
        for num in rec2:
            if num not in rec1:
                ans[1].append(num)
        return ans        
