"""
43 / 43 test cases passed.
Runtime: 28 ms
Memory Usage: 15.1 MB
"""
class Solution:
    WEEK = ("Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday")
    def dayOfTheWeek(self, day: int, month: int, year: int) -> str:
        m = month
        if m < 3:
            m += 12
            year -= 1
        c, y, d = year//100, year%100, day
        w = ((13 * (m + 1))//5 + y//4 + c//4 + y + d + 5*c) % 7
        return self.WEEK[w]
    
"""
43 / 43 test cases passed.
Runtime: 16 ms
Memory Usage: 14.9 MB
"""
import datetime
class Solution2:
    def dayOfTheWeek(self, day: int, month: int, year: int) -> str:
        return datetime.datetime(year, month, day).strftime("%A")
