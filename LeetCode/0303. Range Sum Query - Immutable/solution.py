"""
16 / 16 test cases passed.
Runtime: 64 ms
Memory Usage: 18.1 MB
"""
class NumArray:
    
    def __init__(self, nums: List[int]):
        self.prefix_sum = [0]
        for i, num in enumerate(nums):
            self.prefix_sum.append(self.prefix_sum[i] + num)

    def sumRange(self, i: int, j: int) -> int:
        return self.prefix_sum[j + 1] - self.prefix_sum[i]



# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(i,j)
