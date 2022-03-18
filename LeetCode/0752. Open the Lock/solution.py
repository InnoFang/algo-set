"""
48 / 48 test cases passed.
Runtime: 532 ms
Memory Usage: 16.4 MB
"""
class Solution:
    def openLock(self, deadends: List[str], target: str) -> int:
        deadends = set(deadends)
        if '0000' in deadends:
            return -1
        used = set(['0000']) 
        que = collections.deque([('0000', 0)])

        while que:
            curr, step = que.popleft()
            if curr == target:
                return step
            for nxt in self.next(curr):
                if nxt not in used and nxt not in deadends:
                    used.add(nxt)
                    que.append((nxt, step + 1))
        return -1

    def next(self, num):
        ret = []
        for i in range(len(num)):
            ret.append(num[:i] + self.prev(num[i]) + num[i+1:])
            ret.append(num[:i] + self.succ(num[i]) + num[i+1:])
        return ret

    def prev(self, x):
        return chr(ord(x) - 1) if x != '0' else '9'

    def succ(self, x):
        return chr(ord(x) + 1) if x != '9' else '0'
