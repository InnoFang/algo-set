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


"""
Runtime: 52 ms
Memory Usage: 14.9 MB
"""
class Solution2:
    def sortString(self, s: str) -> str:
        cnt = dict(sorted(Counter(s).items(), key=lambda x: x[0]))
        l = list(cnt)
        ans = ''
        while len(ans) < len(s):
            for i in l:
                if cnt[i] > 0:
                    ans += i
                    cnt[i] -= 1
            for i in l[::-1]:
                if cnt[i] > 0:
                    ans += i
                    cnt[i] -= 1
        return ans
