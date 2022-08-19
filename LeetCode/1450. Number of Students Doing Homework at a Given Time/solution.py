"""
111 / 111 test cases passed.
Runtime: 36 ms
Memory Usage: 15 MB
"""
class Solution:
    def busyStudent(self, startTime: List[int], endTime: List[int], queryTime: int) -> int:
        return sum(1 for st, et in zip(startTime, endTime) if st <= queryTime <= et)
