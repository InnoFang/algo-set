"""
55 / 55 test cases passed.
Runtime: 36 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        record = defaultdict(int)
        for word in split(' ', s1 + " " + s2): 
            record[word] += 1
        return list(filter(lambda k: record[k] == 1, record))
