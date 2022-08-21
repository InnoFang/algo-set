"""
40 / 40 test cases passed.
Runtime: 32 ms
Memory Usage: 15 MB
"""
class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        for num, word in enumerate(sentence.split(), 1):
            if word.startswith(searchWord):
                return num
        return -1
        