"""
Runtime: 32 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
        ans = []
        prv = 0
        for num in target:
            for _ in range(num - prv - 1):
                ans += ['Push', 'Pop']
            ans += ['Push']
            prv = num
        return ans
