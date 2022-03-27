"""
95 / 95 test cases passed.
Runtime: 60 ms
Memory Usage: 20.8 MB
"""
# refer to: https://leetcode-cn.com/problems/minimum-jumps-to-reach-home/solution/python3-bfs-he-dfsjie-fa-by-captaintec/
class Solution:
    def minimumJumps(self, forbidden: List[int], a: int, b: int, x: int) -> int:
        largest = max(forbidden)
        boundary = max(x + b, largest + a + b)
        ban = set(forbidden)

        self.key = -1
        def dfs(num, cnt, back):
            if self.key < 0 and 0 <= num <= boundary:
                if num == x:
                    self.key = cnt
                    return
                if (num + a) not in ban:
                    ban.add(num + a)
                    dfs(num + a, cnt + 1, False)
                if (num - b) not in ban and not back: 
                    dfs(num - b, cnt + 1, True)
                    
        dfs(0, 0, False)
        return self.key
                

"""
95 / 95 test cases passed.
Runtime: 60 ms
Memory Usage: 20.8 MB
"""
class Solution2:
    def minimumJumps(self, forbidden: List[int], a: int, b: int, x: int) -> int:
        largest = max(forbidden)
        boundary = max(x + b, largest + a + b)
        ban = set(forbidden)
        que = collections.deque([(0, 0, False)]) # num, cnt, back or not
        while que:
            cur, cnt, back = que.popleft()
            if cur == x:
                return cnt
            if cur + a <= boundary and cur + a not in ban:
                ban.add(cur + a)
                que.append((cur + a, cnt + 1, False))
            if not back and cur - b > 0 and cur - b not in ban:
                # ban.add(cur - b)
                que.append((cur - b, cnt + 1, True))

        return -1
               