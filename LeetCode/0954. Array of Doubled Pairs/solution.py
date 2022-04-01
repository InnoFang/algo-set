"""
60 / 60 test cases passed.
Runtime: 36 ms
Memory Usage: 15 MB
"""
class Solution:
    def canReorderDoubled(self, arr: List[int]) -> bool:
        cnt = Counter(arr)
        for x in sorted(cnt, key=abs):
            if cnt[x << 1] < cnt[x]:
                return False
            cnt[x << 1] -= cnt[x]
        return True
 