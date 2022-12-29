"""
Runtime: 40 ms
Memory Usage: 15 MB
"""
class Solution:
    def twoOutOfThree(self, nums1: List[int], nums2: List[int], nums3: List[int]) -> List[int]:
        mask = defaultdict(int)
        for i, nums in enumerate((nums1, nums2, nums3)):
            for n in nums:
                mask[n] |= 1 << i
        return [n for n, c in mask.items() if c & (c - 1)]
