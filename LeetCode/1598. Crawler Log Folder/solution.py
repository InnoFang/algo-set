"""
99 / 99 test cases passed.
Runtime: 44 ms
Memory Usage: 15 MB
"""
class Solution:
    def minOperations(self, logs: List[str]) -> int:
        s = []
        for log in logs:
            if log == '../':
                if s:
                    s.pop()
                continue
            if log == './':
                continue
            s.append(log)
        return len(s)
   