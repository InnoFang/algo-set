/**
 * 34 / 34 test case passed
 * Status: Accepted
 * Runtime: 0 ms
 */
 func canMeasureWater(x int, y int, z int) bool {
    if x + y < z {
        return false
    }
    if x == 0 || y == 0 {
        return z == 0 || x + y == 0
    }
    return z % gcd(x, y) == 0
}

func gcd(x, y int) int {
    if y == 0 {
        return x
    }
    return gcd(y, x % y)
}
