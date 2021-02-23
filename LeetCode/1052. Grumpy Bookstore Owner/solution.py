"""
78 / 78 test cases passed.
Runtime: 296 ms
Memory Usage: 17.2 MB
"""
class Solution:
    def maxSatisfied(self, customers: List[int], grumpy: List[int], X: int) -> int:
        satisfied = sum([cus for i, cus in enumerate(customers) if grumpy[i] == 0])
        slide = sum([customers[i] * grumpy[i] for i in range(X)])
        rest = slide
        for i in range(X, len(grumpy)):
            slide += customers[i] * grumpy[i] - customers[i - X] * grumpy[i - X]
            rest = max(rest, slide)
        return satisfied + rest
