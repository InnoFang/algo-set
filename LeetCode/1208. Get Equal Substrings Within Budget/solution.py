"""
37 / 37 test cases passed.
Status: Accepted
Runtime: 88 ms
"""
class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        cost = [abs(ord(s[i]) - ord(t[i])) for i in range(len(s))]
        start, ans, sum_range = 0, 0, 0
        for end in range(len(cost)):
            sum_range += cost[end]
            while sum_range > maxCost:
                sum_range -= cost[start]
                start += 1
            ans = max(ans, end - start + 1)
        return ans
