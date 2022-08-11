"""
302 / 302 test cases passed.
Runtime: 48 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def reformat(self, s: str) -> str:
        n, a, sz = 0, 0, len(s)
        nc = sum([1 for c in s if c.isdigit()])
        ac = sz - nc
        ans = ""
        if abs(nc - ac) > 1:
            return ans
        while a < sz or n < sz:
            while n < sz and not s[n].isdigit():
                n += 1
            while a < sz and not s[a].isalpha():
                a += 1
            if nc >= ac:
                if n < sz:
                    ans += f"{s[n]}"
                    n += 1
                if a < sz:
                    ans += f"{s[a]}"
                    a += 1
            else:
                if a < sz:
                    ans += f"{s[a]}"
                    a += 1
                if n < sz:
                    ans += f"{s[n]}"
                    n += 1
        return ans
