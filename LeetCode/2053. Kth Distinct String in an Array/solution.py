""" 
Runtime: 44 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        cnt = Counter(arr)
        for num in arr:
            if cnt[num] == 1:
                k -= 1
                if k == 0:
                    return num
        return ''
