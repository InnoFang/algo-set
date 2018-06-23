from functools import reduce
class Solution:
    def plusOne(self, digits):
        """
        109 / 109 test cases passed.
        Status: Accepted
        Runtime: 40 ms
        ----------------
        :type digits: List[int]
        :rtype: List[int]
        """
        num = reduce(lambda acc, x: acc * 10 + x, digits)
        num += 1
        return list(map(lambda x: int(x), str(num)))