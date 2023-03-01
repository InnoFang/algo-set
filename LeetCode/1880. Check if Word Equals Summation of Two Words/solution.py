"""
Runtime: 28 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def isSumEqual(self, firstWord: str, secondWord: str, targetWord: str) -> bool:
        def numerical(word):
            ret = 0
            for c in word:
                ret *= 10
                ret += ord(c) - ord('a') 
            return ret
        return numerical(firstWord) + numerical(secondWord) == numerical(targetWord)  
