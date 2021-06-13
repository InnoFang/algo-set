# The isBadVersion API is already defined for you.
# @param version, an integer
# @return an integer
# def isBadVersion(version):

"""
22 / 22 test cases passed.
Runtime: 36 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """
        l, r = 1, n
        while l < r:
            mid = l + r >> 1
            if isBadVersion(mid):
                r = mid
            else:
                l = mid + 1
        return l
