"""
75 / 75 test cases passed.
Status: Accepted
Runtime: 404 ms
"""
class Solution:
    def fairCandySwap(self, A: List[int], B: List[int]) -> List[int]:
        delta = (sum(A) - sum(B)) // 2
        setA = set(A)
        for b in B:
            if (b + delta) in setA:
                return [b + delta, b] 
    
