"""
42 / 42 test cases passed.
Status: Accepted
Runtime: 84 ms
"""
import bisect

class Solution:
    def medianSlidingWindow(self, nums: List[int], k: int) -> List[float]:
        mediam = lambda a: (a[(len(a)-1)//2] + a[len(a)//2]) / 2
        a = sorted(nums[:k])
        ans = [mediam(a)]
        for i, j in zip(nums[:-k], nums[k:]):
            a.pop(bisect.bisect_left(a, i))
            bisect.insort_left(a, j)
            ans.append(mediam(a))
        return ans;
