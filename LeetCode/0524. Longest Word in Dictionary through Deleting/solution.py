"""
31 / 31 test cases passed.
Runtime: 492 ms
Memory Usage: 16.7 MB
"""
class Solution:
    def findLongestWord(self, s: str, dictionary: List[str]) -> str:
        dictionary.sort(key=lambda x: (-len(x), x))
        for t in dictionary:
            i = j = 0
            while i < len(s) and j < len(t):
                if s[i] == t[j]:
                    j += 1
                i += 1
            if j == len(t):
                return t
        return ""
