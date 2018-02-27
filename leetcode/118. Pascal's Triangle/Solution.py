class Solution:
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        ---------
        15 / 15 test cases passed.
        Status: Accepted
        Runtime: 40 ms
        """
        triangle = []

        def row():
            line = [1]
            while True:
                yield line
                line = [1] + [line[i] + line[i + 1] for i in range(len(line) - 1)] + [1]

        for r in zip(range(numRows), row()):
            triangle.append(r[1])
        return triangle


if __name__ == '__main__':
    print(Solution().generate(0))
    print(Solution().generate(1))
    print(Solution().generate(3))
    print(Solution().generate(10))
