"""
Runtime: 36 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        ans = 0
        for sentence in sentences:
            w = sentence.count(' ') + 1
            if not ans or w > ans:
                ans = w 
        return ans
