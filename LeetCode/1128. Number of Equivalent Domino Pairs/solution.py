"""
19 / 19 test cases passed.
Status: Accepted
Runtime: 292 ms
"""
class Solution:
    def numEquivDominoPairs(self, dominoes: List[List[int]]) -> int:
        nums = [0] * 100
        ans = 0
        for domi in dominoes:
            num = domi[0] * 10 + domi[1] if domi[0] > domi[1] else domi[1] * 10 + domi[0]
            ans += nums[num]
            nums[num] += 1
        return ans
