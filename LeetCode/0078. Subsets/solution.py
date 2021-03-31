"""
10 / 10 test cases passed.
Runtime: 52 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        ans, path = [], []
        def backtrack(start, path):
            ans.append(path[:])
            for i in range(start, len(nums)):
                path.append(nums[i])
                backtrack(i + 1, path)
                path.pop();
        backtrack(0, path)
        return ans
