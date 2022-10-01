"""
108 / 108 test cases passed.
Runtime: 40 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def reformatNumber(self, number: str) -> str:
        s = number.replace(" ", "").replace("-", "")
        n, i = len(s), 0
        ans = ""
        while i < n:
            if ans:
                ans += '-'
            if i + 5 > n:
                ans += s[i:] if i + 3 >= n else f"{s[i:i+2]}-{s[i+2:]}"
                break
            ans += s[i:i+3]
            i += 3
        return ans
        