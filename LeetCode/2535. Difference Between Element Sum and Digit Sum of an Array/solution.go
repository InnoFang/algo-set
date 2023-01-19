/**
 * Runtime: 12 ms
 * Memory Usage: 5.2 MB 
 */
 func differenceOfSum(nums []int) int {
    a, b := 0, 0
    for _, num := range nums {
        a += num
        for x := num; x > 0; x /= 10 {
            b += x % 10
        }
    }
    if a > b {
        return a - b
    }
    return b - a
}
