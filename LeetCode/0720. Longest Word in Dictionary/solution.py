"""
59 / 59 test cases passed.
Runtime: 76 ms
Memory Usage: 15.9 MB
"""
class Solution:
    def longestWord(self, words: List[str]) -> str:
        Trie = lambda: collections.defaultdict(Trie)
        trie = Trie()
        END = True

        for i, word in enumerate(words):
            functools.reduce(dict.__getitem__, word, trie)[END] = i

        stk = list(trie.values())
        ans = ""
        while stk:
            cur = stk.pop()
            if END in cur:
                word = words[cur[END]]
                if len(word) > len(ans) or len(word) == len(ans) and word < ans:
                    ans = word
                stk.extend([cur[letter] for letter in cur if letter != END])

        return ans


"""
59 / 59 test cases passed.
Runtime: 48 ms
Memory Usage: 15.4 MB
"""
class Solution2:
    def longestWord(self, words: List[str]) -> str:
        words.sort()
        s = set()
        ans = ""
        for word in words:
            if len(word) == 1 or word[0:-1] in s:
                if len(word) > len(ans):
                    ans = word
                s.add(word)
        return ans
