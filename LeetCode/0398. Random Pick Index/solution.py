"""
14 / 14 test cases passed.
Runtime: 104 ms
Memory Usage: 25 MB
"""
class Solution:
    
    def __init__(self, nums: List[int]):
        self.rec = collections.defaultdict(list)
        for i, num in enumerate(nums):
            self.rec[num].append(i)


    def pick(self, target: int) -> int:
        return random.choice(self.rec[target])



# Your Solution object will be instantiated and called as such:
# obj = Solution(nums)
# param_1 = obj.pick(target)
