"""
Runtime: 44 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def digitCount(self, num: str) -> bool:
        cnt = Counter(num)
        return all(cnt[str(i)] == int(n) for i, n in enumerate(num))

