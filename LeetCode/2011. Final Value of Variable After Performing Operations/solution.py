"""
Runtime: 44 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        x = 0
        for op in operations:
            x += 1 if op[1] == '+' else -1
        return x
    