"""
40 / 40 test cases passed.
Status: Accepted
Runtime: 84 ms
"""
class Solution:
    def maxScore(self, cardPoints: List[int], k: int) -> int:
        range_sum = sum(cardPoints[:k])
        ans = range_sum
        for i, j in zip(cardPoints[k-1::-1], cardPoints[:-k-1:-1]):
            range_sum = range_sum -i + j
            ans = max(ans, range_sum)
        return ans
