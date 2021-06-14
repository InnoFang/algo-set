# The guess API is already defined for you.
# @param num, your guess
# @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
# def guess(num: int) -> int:

"""
25 / 25 test cases passed.
Runtime: 44 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def guessNumber(self, n: int) -> int:
        l, r = 1, n
        while l <= r:
            num = l + (r - l) // 2
            check = guess(num)
            if check == 0:
                return num
            elif check == 1:
                l = num + 1;
            elif check == -1:
                r = num - 1;
        return -1

