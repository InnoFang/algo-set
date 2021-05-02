"""
87 / 87 test cases passed.
Runtime: 72  ms
Memory Usage: 18 MB
"""
from itertools import accumulate
from collections import Counter
class Solution:
    def leastBricks(self, wall: List[List[int]]) -> int:
        through = []
        for bricks in wall:
            through.extend(accumulate(bricks[:-1]))
        max_through = Counter(through).most_common()
        return len(wall) - (max_through[0][-1] if len(max_through) else 0)
