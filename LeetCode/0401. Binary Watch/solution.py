"""
10 / 10 test cases passed.
Status: Accepted
Runtime: 44 ms
"""
class Solution:
    def readBinaryWatch(self, num: int) -> List[str]:
        ans = []
        for h in range(12):
            for m in range(60):
                if (bin(h) + bin(m)).count('1') == num:
                    ans.append("%d:%02d" % (h, m))
        return ans

