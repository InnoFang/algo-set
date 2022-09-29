"""
92 / 92 test cases passed.
Runtime: 120 ms
Memory Usage: 17.3 MB
"""
class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        rec = collections.defaultdict(int)
        rec[0] = 1
        ans = psum = 0
        for num in nums:
            psum += num
            if (psum - k) in rec:
                ans += rec[psum - k]
            rec[psum] += 1
        return ans
        