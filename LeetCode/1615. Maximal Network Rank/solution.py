"""
82 / 82 test cases passed.
Runtime: 100 ms
Memory Usage: 16.5 MB
"""
class Solution:
    def maximalNetworkRank(self, n: int, roads: List[List[int]]) -> int:
        rec = collections.defaultdict(set)
        for road in roads:
            rec[road[0]].add(road[1])
            rec[road[1]].add(road[0])
        
        ans = 0
        for i in range(n):
            for j in range(i + 1, n):
                s = len(rec[i]) + len(rec[j])
                if j in rec[i]:
                    s -= 1
                ans = max(ans, s)
        return ans
        