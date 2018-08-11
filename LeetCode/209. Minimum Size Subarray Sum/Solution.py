class Solution:
    def minSubArrayLen(self, s, nums):
        """
        :type s: int
        :type nums: List[int]
        :rtype: int
        ------------------------------
        15 / 15 test cases passed.
        Status: Accepted
        Runtime: 72 ms
        """
        l, sum, res = 0, 0, len(nums) + 1
        for r in range(len(nums)):
            sum += nums[r]
            while l <= r and sum >= s:
                res = min(res, r - l + 1)
                sum -= nums[l]
                l += 1

        return res if res != len(nums) + 1 else 0


if __name__ == '__main__':
    print(Solution().minSubArrayLen(15, [1, 2, 3, 4, 5]))
    print(Solution().minSubArrayLen(7, [2, 3, 1, 2, 4, 3]))
