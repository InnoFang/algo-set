"""
99 / 99 test cases passed.
Runtime: 32 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def toGoatLatin(self, sentence: str) -> str:
        vowel = ['a', 'e', 'i', 'o', 'u']
        ans = []
        for i, word in enumerate(sentence.split()):
            if word[0].lower() in vowel:
                ans.append(word + 'ma' + 'a' * (i + 1))
            else:
                ans.append(word[1:] + word[0] + 'ma' + 'a' * (i + 1))
        return ' '.join(ans)
