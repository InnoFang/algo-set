"""
102 / 102 test cases passed.
Runtime: 68 ms
Memory Usage: 27.1 MB
"""
class Solution:
    def find132pattern(self, nums: List[int]) -> bool:
        minn = float('-inf')
        stk = []
        for num in reversed(nums):
            if num < minn: return True
            while stk and stk[-1] < num:
                minn = stk.pop()
            stk.append(num)
        return False
        