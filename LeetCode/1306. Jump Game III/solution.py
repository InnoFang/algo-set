"""
56 / 56 test cases passed.
Runtime: 44 ms
Memory Usage: 19.5 MB
"""
class Solution:
    def canReach(self, arr: List[int], start: int) -> bool:
        if arr[start] == 0:
            return True
        n = len(arr)
        que = collections.deque([start])
        vis = [False] * n
        while que:
            curr = que.pop()
            nxt = curr + arr[curr]
            if nxt < n and not vis[nxt]:
                if arr[nxt] == 0:
                    return True
                vis[nxt] = True
                que.append(nxt)
            nxt = curr - arr[curr]
            if nxt >= 0 and not vis[nxt]:
                if arr[nxt] == 0:
                    return True
                vis[nxt] = True
                que.append(nxt)
        return False


"""
56 / 56 test cases passed.
Runtime: 44 ms
Memory Usage: 19.5 MB
"""
class Solution2:
    def canReach(self, arr: List[int], start: int) -> bool:
        if 0 <= start < len(arr):
            if arr[start] == 0: return True
            temp = arr[start]
            arr[start] = len(arr)
            return self.canReach(arr, start + temp) or self.canReach(arr, start - temp)
        return False
