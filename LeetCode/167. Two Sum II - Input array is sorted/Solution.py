class Solution:
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        ---------------------------
        16 / 16 test cases passed.
        Status: Accepted
        Runtime: 88 ms
        """
        first = 0
        second = len(numbers) - 1
        while first < second and numbers[first] + numbers[second] != target:
            if numbers[first] + numbers[second] < target: first += 1
            if numbers[first] + numbers[second] > target: second -= 1
        return [first + 1, second + 1]


class Solution2:
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int] 
        -----------------------------
        16 / 16 test cases passed.
        Status: Accepted
        Runtime: 66 ms
        """
        store = {}
        for i, num in enumerate(numbers):
            if target - num in store:
                return [store[target - num] + 1, i + 1]
            store[num] = i


if __name__ == '__main__':
    print(Solution2().twoSum([2, 7, 11, 15], 9))
    print(Solution2().twoSum([2, 3, 4], 6))
