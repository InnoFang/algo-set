"""
39 / 39 test cases passed.
Runtime: 340 ms
Memory Usage: 34.7 MB
"""
class Solution:
    def numOfMinutes(self, n: int, headID: int, manager: List[int], informTime: List[int]) -> int:
        graph = [[] for _ in range(n)]
        for i in range(n):
            id = manager[i]
            if id != -1:
                graph[id].append(i)
        que = collections.deque([(headID, informTime[headID])])
        ans = 0
        while que:
            for _ in range(len(que)):
                pid, time = que.popleft()
                ans = max(ans, time)
                for id in graph[pid]:
                    que.append((id, time + informTime[id]))
        return ans
