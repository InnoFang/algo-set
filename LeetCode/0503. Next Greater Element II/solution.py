"""
224 / 224 test cases passed.
Runtime: 324 ms
Memory Usage: 16.2 MB
"""
class Solution:
    def nextGreaterElements(self, nums: List[int]) -> List[int]:
        n = len(nums)
        stack = []
        ans = [-1] * n
        for i in range(2 * n):
            while stack and nums[stack[-1]] < nums[i % n]:
                ans[stack[-1] % n] = nums[i % n]
                stack.pop()
            stack.append(i % n)
        return ans
