"""
95 / 95 test cases passed.
Runtime: 260 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def findTheWinner(self, n: int, k: int) -> int:
        que = collections.deque(range(1, n + 1))
        for _ in range(n - 1):
            for i in range(k - 1):
                que.append(que.popleft())
            que.popleft()
        return que.popleft()
