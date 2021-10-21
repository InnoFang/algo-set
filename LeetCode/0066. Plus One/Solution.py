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

class Solution2:
    """
    111 / 111 test cases passed.
    Status: Accepted
    Runtime: 32 ms
    ----------------
    :type digits: List[int]
    :rtype: List[int]
    """
    def plusOne(self, digits: List[int]) -> List[int]:
        n = len(digits)
        for i in range(n - 1, -1, -1):
            if digits[i] == 9:
                digits[i] = 0
            else:
                digits[i] += 1
                return digits
        return [1] + [0] * n
