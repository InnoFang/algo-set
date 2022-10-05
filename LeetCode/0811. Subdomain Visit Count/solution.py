"""
52 / 52 test cases passed.
Runtime: 48 ms
Memory Usage: 15 MB
"""
class Solution:
    def subdomainVisits(self, cpdomains: List[str]) -> List[str]:
        cnt = Counter()
        for domain in cpdomains:
            c, s = domain.split()
            c = int(c)
            cnt[s] += c
            while '.' in s:
                s = s[s.index('.') + 1:]
                cnt[s] += c
        return [f"{c} {s}" for s, c in cnt.items()]
