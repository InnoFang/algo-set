"""
68 / 68 test cases passed.
Runtime: 212 ms
Memory Usage: 19.7 MB
"""
class RecentCounter:
    
    def __init__(self):
        self.que = collections.deque()


    def ping(self, t: int) -> int:
        while self.que and self.que[0] + 3000 < t:
            self.que.popleft()
        self.que.append(t)
        return len(self.que)



# Your RecentCounter object will be instantiated and called as such:
# obj = RecentCounter()
# param_1 = obj.ping(t)