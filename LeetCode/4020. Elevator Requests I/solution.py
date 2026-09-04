class Solution:
    def elevatorRequests(self, n: int, requests: list[int]) -> int:
        return sum(abs(l - r) for l, r in pairwise([0] + requests))
        
