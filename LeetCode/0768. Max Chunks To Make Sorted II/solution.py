"""
139 / 139 test cases passed.
Runtime: 36 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def maxChunksToSorted(self, arr: List[int]) -> int:
        s = []
        for num in arr:
            if not s or s[-1] <= num:
                s.append(num)
            else:
                head = s.pop()
                while s and s[-1] > num:
                    s.pop()
                s.append(head)
        return len(s)
