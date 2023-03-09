""" 
Runtime: 40 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def minimumRecolors(self, blocks: str, k: int) -> int:
        ans, tmp = inf, 0
        for i, block in enumerate(blocks):
            if block == 'W':
                tmp += 1
            if i >= k and blocks[i - k] == 'W':
                tmp -= 1
            if i >= k - 1:
                ans = min(ans, tmp)
        return ans  
