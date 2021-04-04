"""
54 / 54 test cases passed.
Runtime: 44 ms
Memory Usage: 15 MB
"""
class Solution:
    def numRabbits(self, answers: List[int]) -> int:
        count = collections.Counter(answers)
        return sum((count[x] + x) // (x + 1) * (x + 1) for x in count)
