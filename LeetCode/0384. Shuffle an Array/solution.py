"""
10 / 10 test cases passed.
Runtime: 184 ms
Memory Usage: 20.4 MB
"""
class Solution:
    
    def __init__(self, nums: List[int]):
        self.nums = nums.copy()
        self.origin = nums

    def reset(self) -> List[int]:
        return self.origin


    def shuffle(self) -> List[int]:
        n = len(self.nums)
        for i in range(n):
            j = random.randrange(i, n)
            self.nums[i], self.nums[j] = self.nums[j], self.nums[i]
        return self.nums



# Your Solution object will be instantiated and called as such:
# obj = Solution(nums)
# param_1 = obj.reset()
# param_2 = obj.shuffle()
