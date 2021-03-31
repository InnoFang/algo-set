"""
19 / 19 test cases passed.
Runtime: 48 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        ans, path = [], []
        nums.sort()
        self.dfs(0, nums, ans, path)
        return ans

    def dfs(self, start, nums, ans, path):
        ans.append(path[:])
        for i in range(start, len(nums)):
            if i != start and nums[i] == nums[i - 1]:
                continue
            path.append(nums[i])
            self.dfs(i + 1, nums, ans, path)
            path.pop()

"""
19 / 19 test cases passed.
Runtime: 36 ms
Memory Usage: 14.9 MB
"""
class Solution2:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        ans, path = [], []
        nums.sort()
        def trackback(start, path):
            ans.append(path[:])
            for i in range(start, len(nums)):
                if i != start and nums[i] == nums[i - 1]:
                    continue
                path.append(nums[i])
                trackback(i + 1, path)
                path.pop()
        trackback(0, path)
        return ans

    