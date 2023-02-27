/**
 * Runtime: 8 ms
 * Memory Usage: 4.5 MB 
 */
func leftRigthDifference(nums []int) []int {
    leftSum, rightSum := 0, 0
    for _, num := range nums {
        rightSum += num
    }
    for i, num := range nums {
        rightSum -= num
        if leftSum > rightSum {
            nums[i] = leftSum - rightSum
        } else {
            nums[i] = rightSum - leftSum;
        }
        leftSum += num
    }
    return nums
}