"""
67 / 67 test cases passed.
Runtime: 208 ms
Memory Usage: 33.7 MB
"""
class Solution:
    def advantageCount(self, nums1: List[int], nums2: List[int]) -> List[int]:
        n = len(nums1)
        idx1, idx2 = list(range(n)), list(range(n))
        idx1.sort(key=lambda x: nums1[x])
        idx2.sort(key=lambda x: nums2[x])

        ans = [0] * n
        l, r = 0, n - 1
        for i in range(n):
            if nums1[idx1[i]] > nums2[idx2[l]]:
                ans[idx2[l]] = nums1[idx1[i]]
                l += 1
            else:
                ans[idx2[r]] = nums1[idx1[i]]
                r -= 1
        return ans
