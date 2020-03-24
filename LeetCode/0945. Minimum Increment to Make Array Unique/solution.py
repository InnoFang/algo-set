class Solution:
    """
    59 / 59 test case passed
    Status: Accepted
    Runtime: 412 ms
    """
    def minIncrementForUnique(self, A: List[int]) -> int:
        A.sort()
        ans = 0
        for i in range(1, len(A)):
            if A[i] <= A[i-1]:
                ans += A[i - 1] - A[i] + 1
                A[i] = A[i - 1] + 1
        return ans
        