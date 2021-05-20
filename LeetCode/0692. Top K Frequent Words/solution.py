"""
110 / 110 test cases passed.
Runtime: 64 ms
Memory Usage: 15 MB
"""
class Solution:
    def topKFrequent(self, words: List[str], k: int) -> List[str]:
        return [freq[0] for freq in Counter(sorted(words)).most_common(k)]
