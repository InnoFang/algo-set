"""
15 / 15 test cases passed.
Runtime: 236 ms
Memory Usage: 33.6 MB
"""
class Trie:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.next = [None] * 26
        self.is_end = False


    def insert(self, word: str) -> None:
        """
        Inserts a word into the trie.
        """
        node = self
        for ch in word:
            index = ord(ch) - ord('a')
            if not node.next[index]:
                node.next[index] = Trie()
            node = node.next[index]
        node.is_end = True

    def search(self, word: str) -> bool:
        """
        Returns if the word is in the trie.
        """
        node = self
        for ch in word:
            index = ord(ch) - ord('a')
            if not node.next[index]:
                return False
            node = node.next[index]
        return node.is_end

    def startsWith(self, prefix: str) -> bool:
        """
        Returns if there is any word in the trie that starts with the given prefix.
        """
        node = self
        for ch in prefix:
            index = ord(ch) - ord('a')
            if not node.next[index]:
                return False
            node = node.next[index]
        return True


"""
15 / 15 test cases passed.
Runtime: 180 ms
Memory Usage: 32.5 MB
"""
class Trie2:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.lookup = { '#': False }


    def insert(self, word: str) -> None:
        """
        Inserts a word into the trie.
        """
        node = self
        for ch in word:
            if ch not in node.lookup:
                node.lookup[ch] = Trie()
            node = node.lookup[ch]
        node.lookup['#'] = True

    def search(self, word: str) -> bool:
        """
        Returns if the word is in the trie.
        """
        node = self
        for ch in word:
            if ch not in node.lookup:
                return False
            node = node.lookup[ch]
        return node.lookup['#']

    def startsWith(self, prefix: str) -> bool:
        """
        Returns if there is any word in the trie that starts with the given prefix.
        """
        node = self
        for ch in prefix:
            if ch not in node.lookup:
                return False
            node = node.lookup[ch]
        return True


# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)
