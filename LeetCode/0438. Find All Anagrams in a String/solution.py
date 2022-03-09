"""
61 / 61 test cases passed.
Runtime: 92 ms
Memory Usage: 15.5 MB
"""
class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        idx = lambda x : ord(x) - ord('a')
        sl, pl = len(s), len(p)
        if sl < pl: return []
        scnt, pcnt = [0] * 26, [0] * 26
        for i in range(pl):
            scnt[idx(s[i])] += 1
            pcnt[idx(p[i])] += 1

        ans = []
        if scnt == pcnt:
            ans.append(0)
        for i in range(pl, sl):
            scnt[idx(s[i - pl])] -= 1
            scnt[idx(s[i])] += 1
            if scnt == pcnt:
                ans.append(i - pl + 1)
        return ans
