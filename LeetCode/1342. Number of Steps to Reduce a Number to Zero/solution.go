/**
 * 204 / 204 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 1.9 MB 
 */
func numberOfSteps(num int) int {
    step := 0 
    for num > 0 {
        if num & 1 == 1 { 
            num-- 
        } else { 
            num >>= 1 
        }
        step++
    }
    return step
}
