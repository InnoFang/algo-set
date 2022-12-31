"""
Runtime: 44 ms
Memory Usage: 15 MB
"""
class Solution:
    def minMovesToSeat(self, seats: List[int], students: List[int]) -> int:
        seats.sort()
        students.sort()
        ans = 0
        for seat, stu in zip(seats, students):
            ans += abs(seat - stu)
        return ans
