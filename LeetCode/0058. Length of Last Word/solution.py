"""
58 / 58 test cases passed.
Runtime: 36 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        return len(s.strip().split(" ")[-1])


"""
58 / 58 test cases passed.
Runtime: 24 ms
Memory Usage: 15.1 MB
"""
class Solution2:
    def lengthOfLastWord(self, s: str) -> int:
        i, ans = len(s) - 1, 0
        while i >= 0 and s[i] == ' ':
            i -= 1
        while i >= 0 and s[i] != ' ':
            ans += 1
            i -= 1
        return ans
