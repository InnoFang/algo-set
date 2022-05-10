"""
127 / 127 test cases passed.
Runtime: 448 ms
Memory Usage: 62.9 MB
"""
class Solution:
    def findWinners(self, matches: List[List[int]]) -> List[List[int]]:
        cnt = defaultdict(int)
        win = defaultdict(int)
        los = defaultdict(int)
        for w, l in matches:
            cnt[w] += 1     
            cnt[l] += 1
            win[w] += 1
            los[l] += 1
        ans = [[], []]    
        for p in sorted(cnt.keys()):
            if los[p] == 0:
                ans[0].append(p)
            elif los[p] == 1:
                ans[1].append(p)
        return ans           
