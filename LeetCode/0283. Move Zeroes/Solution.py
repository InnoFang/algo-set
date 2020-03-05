class Solution:
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        ----------------------------
        21 / 21 test cases passed.
        Status: Accepted
        Runtime: 97 ms
        """
        zeros = 0
        for i in range(len(nums)):
            if nums[i] != 0:
                if zeros != 0:
                    nums[i - zeros], nums[i] = nums[i], 0
            else:
                zeros += 1


if __name__ == '__main__':
    arr = [0, 1, 0, 3, 12]
    Solution().moveZeroes(arr)
    for i in arr: print(i, end=' ')
