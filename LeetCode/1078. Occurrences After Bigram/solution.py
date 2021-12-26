"""
30 / 30 test cases passed.
Runtime: 40 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def findOcurrences(self, text: str, first: str, second: str) -> List[str]:
        words = text.split()
        ans = []
        for i in range(2, len(words)):
            if words[i - 2] == first and words[i - 1] == second:
                ans.append(words[i])
        return ans
