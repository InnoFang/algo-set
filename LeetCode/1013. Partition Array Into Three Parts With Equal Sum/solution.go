/**
 * 55 / 55 test case passed
 * Status: Accepted
 * Runtime: 56 ms
 */
func canThreePartsEqualSum(A []int) bool {
    sum := 0
    for _, a := range A {
        sum += a
    }
    if sum % 3 != 0 {
        return false
    }
    partSum := []int{sum / 3, sum / 3, sum / 3}
    pIndex := 0
    for _, a := range A {
        if pIndex > 2 {
            break
        }
        partSum[pIndex] -= a
        if partSum[pIndex] == 0 {
            pIndex++
        }
    }
    return partSum[2] == 0 && pIndex > 2
}
