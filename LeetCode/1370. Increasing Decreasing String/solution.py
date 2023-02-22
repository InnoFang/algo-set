"""
Runtime: 84 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def sortString(self, s: str) -> str:
        cnt = Counter(s)
        ans = []
        reverse = False
        while cnt:
            ans.append(''.join(sorted(list(cnt), reverse=reverse)))
            reverse = not reverse
            cnt -= Counter(cnt.keys())
        return ''.join(ans)
