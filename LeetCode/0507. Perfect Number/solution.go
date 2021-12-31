/**
 * 98 / 98 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 1.9 MB 
 */
func checkPerfectNumber(num int) bool {
    if num == 1 {
        return false
    }

    sum := 1
    for i := 2; i * i <= num; i++ {
        if num % i == 0 {
            sum += i
            if i * i != num {
                sum += num / i
            }
        }
    }
    return sum == num
}
