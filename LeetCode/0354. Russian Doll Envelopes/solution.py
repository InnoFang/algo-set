"""
56 / 56 test cases passed.
Runtime: 64 ms
Memory Usage: 16.3 MB
"""
import bisect
class Solution:
    def maxEnvelopes(self, envelopes: List[List[int]]) -> int:
        if not len(envelopes):
            return 0

        envelopes.sort(key=lambda x: (x[0], -x[1]))
        record = [envelopes[0][1]]
        for _, h in envelopes[1:]:
            if h > record[-1]:
                record.append(h)
            else:
                idx = bisect.bisect_left(record, h)
                record[idx] = h
        return len(record)
