"""
68 / 68 test cases passed.
Runtime: 232 ms
Memory Usage: 26.1 MB
"""
class Solution:
    
    def __init__(self, n: int, blacklist: List[int]):
        m = len(blacklist)
        self.bound = w = n - m
        black = {b for b in blacklist if b >= self.bound}
        self.black2white = {}
        for b in blacklist:
            if b < self.bound:
                while w in black:
                    w += 1
                self.black2white[b] = w
                w += 1

    def pick(self) -> int:
        x = randrange(self.bound)
        return self.black2white.get(x, x)



# Your Solution object will be instantiated and called as such:
# obj = Solution(n, blacklist)
# param_1 = obj.pick()
