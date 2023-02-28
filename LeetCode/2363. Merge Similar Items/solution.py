"""
Runtime: 44 ms
Memory Usage: 15.6 MB
"""
class Solution:
    def mergeSimilarItems(self, items1: List[List[int]], items2: List[List[int]]) -> List[List[int]]:
        cnt = Counter()
        for v, w in items1:
            cnt[v] += w
        for v, w in items2:
            cnt[v] += w
        return sorted([v, w] for v, w in cnt.items())
