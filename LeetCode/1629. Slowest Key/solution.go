/**
 * 109 / 109 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 3.8 MB 
 */
func slowestKey(releaseTimes []int, keysPressed string) byte {
    n, max_cost, slowest_key := len(keysPressed), releaseTimes[0], keysPressed[0]
    for i := 1; i < n; i++ {
        cost := releaseTimes[i] - releaseTimes[i - 1]
        if cost > max_cost ||
           cost == max_cost && keysPressed[i] > slowest_key {
               slowest_key = keysPressed[i]
               max_cost = cost
           }
    }
    return slowest_key
}
