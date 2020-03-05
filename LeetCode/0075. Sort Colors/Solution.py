class Solution:
    def sortColors(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        -----------------------------------------
        86 / 86 test cases passed.
        Status: Accepted
        Runtime: 59 ms
        """
        zeros = ones = 0
        for curr in range(len(nums)):
            val = nums[curr]
            nums[curr] = 2
            if val < 2:
                nums[ones] = 1
                ones += 1
            if val == 0:
                nums[zeros] = 0
                zeros += 1


if __name__ == '__main__':
    arr = [1, 0, 2, 0, 2, 1, 1, 0, 0, 2, 2, 0, 2, 1, 0, 2, 1]
    Solution().sortColors(arr)
    print(arr)

    arr = [0, 0, 0, 0, 0, 0, 0, 0, 0]
    Solution().sortColors(arr)
    print(arr)

    arr = [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]
    Solution().sortColors(arr)
    print(arr)

    arr = [2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2]
    Solution().sortColors(arr)
    print(arr)

    arr = []
    Solution().sortColors(arr)
    print(arr)
