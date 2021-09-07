/**
 * 46 / 46 test cases passed.
 * Runtime: 32 ms
 * Memory Usage: 6.7 MB
 */
func search(nums []int, target int) int {
	lo, hi := 0, len(nums)-1
	for lo <= hi {
		mid := lo + (hi-lo)/2
		switch {
		case nums[mid] > target:
			hi = mid - 1
		case nums[mid] < target:
			lo = mid + 1
		default:
			return mid
		}
	}
	return -1
}
