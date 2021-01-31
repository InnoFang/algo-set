"""
21 / 21 test cases passed.
Status: Accepted
Runtime: 80 ms
"""
class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        g.sort()
        s.sort()
        candy = 0
        ans = 0
        for child in g:
            while candy < len(s) and s[candy] < child:
                candy += 1
            
            if candy < len(s):
                ans += 1
                candy += 1
        return ans
