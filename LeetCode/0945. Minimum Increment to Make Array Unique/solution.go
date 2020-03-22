import (
    "sort"
)

/**
 * 59 / 59 test case passed
 * Status: Accepted
 * Runtime: 84 ms
 */
func minIncrementForUnique(A []int) int {
    sort.Ints(A)
    ans := 0
    for i := 1; i < len(A); i++ {
        if A[i] <= A[i - 1] {
            ans += A[i - 1] - A[i] + 1
            A[i] = A[i - 1] + 1
        }
    }
    return ans
}
