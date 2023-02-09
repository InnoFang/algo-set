"""
Runtime: 44 ms
Memory Usage: 15.3 MB
"""
class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        return [name for _, name in sorted(zip(heights, names), reverse=True)]
