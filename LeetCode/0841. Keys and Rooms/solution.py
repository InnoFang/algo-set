"""
68 / 68 test cases passed.
Runtime: 40 ms
Memory Usage: 15.5 MB
"""
class Solution:
    def canVisitAllRooms(self, rooms: List[List[int]]) -> bool:
        n = len(rooms)
        vis = [False] * n
        que = collections.deque(rooms[0])
        while que:
            sr = que.popleft()
            vis[sr] = True
            for sc in rooms[sr]:
                if not vis[sc]:
                    que.append(sc)

        for i in range(1, n):
            if not vis[i]:
                return False
        return True
    