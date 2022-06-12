"""
47 / 47 test cases passed.
Runtime: 40 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def findAndReplacePattern(self, words: List[str], pattern: str) -> List[str]:
        def match(w, p):
            return len(w) == len(p) and len(set(w)) == len(set(p)) == len(set(zip(w, p)))
        return [w for w in words if match(w, pattern)]
        