"""
111 / 111 test cases passed.
Runtime: 440 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def countMaxOrSubsets(self, nums: List[int]) -> int:
        count = largest = 0
        def dfs(idx, res):
            nonlocal count, largest
            if idx == len(nums):
                if res > largest:
                    largest = res
                    count = 1
                elif res == largest:
                    count += 1
                return 0
            dfs(idx + 1, res | nums[idx])
            dfs(idx + 1, res)
        dfs(0, 0)
        return count
