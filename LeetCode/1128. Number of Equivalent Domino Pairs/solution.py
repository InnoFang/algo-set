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

"""
19 / 19 test cases passed.
Status: Accepted
Runtime: 252 ms
"""
from collections import defaultdict
class Solution2:
    def numEquivDominoPairs(self, dominoes: List[List[int]]) -> int:
        nums = defaultdict(int)
        for domi in dominoes:
            nums[tuple(sorted(domi))] += 1

        return sum(v * (v - 1) // 2 for v in nums.values())

"""
19 / 19 test cases passed.
Status: Accepted
Runtime: 304 ms
"""
from collections import Counter
class Solution3:
    def numEquivDominoPairs(self, dominoes: List[List[int]]) -> int:
        return sum(v * (v - 1) // 2 for v in Counter([tuple(sorted(d)) for d in dominoes]).values())
