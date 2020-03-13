/**
 * 44 / 4 test cases passed
 * Status: Accepted
 * Runtime: 24 ms
 */
func majorityElement1(nums []int) int {
    store := make(map[int]int)
    for _, n := range nums {
        if _, ok := store[n]; !ok {
            store[n] = 0
        }
        store[n] += 1
    }
    num, times := nums[0], 0
    for n, t := range store {
        if t > times {
            num = n
            times = t
        }
    }
    return num
}

// better one
func majorityElement2(nums []int) int {
    store := make(map[int]int)
    for _, n := range nums {
        store[n]++
        if store[n] > len(nums) / 2 {
            return n
        }

    }
    return -1
}
