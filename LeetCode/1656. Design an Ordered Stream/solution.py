"""
101 / 101 test cases passed.
Runtime: 140 ms
Memory Usage: 15.8 MB
"""
class OrderedStream:
    
    def __init__(self, n: int):
        self.stream = [""] * (n + 1)
        self.ptr = 1

    def insert(self, idKey: int, value: str) -> List[str]:
        self.stream[idKey] = value
        ret = []
        while self.ptr < len(self.stream) and self.stream[self.ptr]:
            ret.append(self.stream[self.ptr])
            self.ptr += 1
        return ret

# Your OrderedStream object will be instantiated and called as such:
# obj = OrderedStream(n)
# param_1 = obj.insert(idKey,value)
