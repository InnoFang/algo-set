"""
120 / 120 test cases passed.
Runtime: 44 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def canWinNim(self, n: int) -> bool:
        return n % 4 != 0
    class Solution:
        def exclusiveTime(self, n: int, logs: List[str]) -> List[int]:
        ans = [0] * n
        s = [] # [[index, timestamp]]
        for log in logs:
            i, tp, t = log.split(":")
            i, t = int(i), int(t)
            if tp == 'start':
                if s:
                    ans[s[-1][0]] += t - s[-1][1]
                s.append([i, t])
            else: # end
                j, tt = s.pop()
                ans[j] += t - tt + 1
                if s:
                    s[-1][1] = t + 1
        return ans
