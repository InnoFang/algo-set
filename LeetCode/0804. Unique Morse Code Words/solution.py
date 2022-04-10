"""
82 / 82 test cases passed.
Runtime: 40 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        morse = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        rec = set()
        for word in words:
            m_word = ""
            for c in word:
                m_word += morse[(ord(c) - ord('a'))]
            rec.add(m_word)
        return len(rec)
 

"""
82 / 82 test cases passed.
Runtime: 32 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        morse = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        return len(set("".join(morse[ord(c) - ord('a')] for c in word) for word in words))
