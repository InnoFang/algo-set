"""
103 / 103 test cases passed.
Runtime: 44 ms
Memory Usage: 15 MB
"""
class Solution:
    def groupThePeople(self, groupSizes: List[int]) -> List[List[int]]:
        rec = collections.defaultdict(list)
        for i, gs in enumerate(groupSizes):
            if not rec[gs] or len(rec[gs][-1]) == gs:
                rec[gs].append([])
            rec[gs][-1].append(i)
        return [v for value in rec.values() for v in value]
