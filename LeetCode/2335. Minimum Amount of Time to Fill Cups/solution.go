/**
 * Runtime: 4 ms
 * Memory Usage: 1.8 MB 
 */
func fillCups(amount []int) int {
    sort.Ints(amount)
    x, y, z := amount[0], amount[1], amount[2]
    if x + y <= z { return z }
    return (x + y + z + 1) / 2
}