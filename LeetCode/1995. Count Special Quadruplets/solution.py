"""
211 / 211 test cases passed.
Runtime: 1156 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def countQuadruplets(self, nums: List[int]) -> int:
        n, ans = len(nums), 0
        for a in range(n - 3):
            for b in range(a + 1, n - 2):
                for c in range(b + 1, n - 1):
                    for d in range(c + 1, n):
                        if nums[a] + nums[b] + nums[c] == nums[d]:
                            ans += 1
        return ans
    
"""
211 / 211 test cases passed.
Runtime: 52 ms
Memory Usage: 15 MB
"""
class Solution2:
    def countQuadruplets(self, nums: List[int]) -> int:
        n, ans = len(nums), 0
        store = defaultdict(int)
        for b in range(n - 3, 0, -1):
            for d in range(b + 2, n):
                store[nums[d] - nums[b + 1]] += 1
            for a in range(b):
                if (s := nums[a] + nums[b]) in store:
                    ans += store[s]
        return ans
