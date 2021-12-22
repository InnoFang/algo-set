"""
57 / 57 test cases passed.
Runtime: 40 ms
Memory Usage: 15.1 MB
"""
from itertools import reduce
import operator

class Solution:
    def repeatedStringMatch(self, a: str, b: str) -> int:
        a_bmp = reduce(operator.or_, map(lambda x: 1 << ord(x), list(a)), 0)
        b_bmp = reduce(operator.or_, map(lambda x: 1 << ord(x), list(b)), 0)
        if a_bmp & b_bmp != b_bmp:
            return -1
        times = (len(b) - 1) // len(a) + 1
        temp = a * times
        if b in temp:
            return times
        temp += a
        if b in temp:
            return times + 1
        else:
            return -1

"""
57 / 57 test cases passed.
Runtime: 24 ms
Memory Usage: 15 MB
"""
class Solution2:
    def repeatedStringMatch(self, a: str, b: str) -> int:
        a_set, b_set = set(a), set(b)
        if a_set & b_set != b_set:
            return -1
        times = (len(b) - 1) // len(a) + 1
        temp = a * times
        if b in temp:
            return times
        temp += a
        if b in temp:
            return times + 1
        else:
            return -1
