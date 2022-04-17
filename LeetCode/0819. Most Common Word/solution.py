"""
47 / 47 test cases passed.
Runtime: 32 ms
Memory Usage: 15 MB
"""
class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        ban = set(banned)
        return Counter(word for word in re.split('[^\w]+', paragraph.lower()) if word not in ban).most_common(1)[0][0]
