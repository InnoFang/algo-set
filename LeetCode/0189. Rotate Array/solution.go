/**
 * 35 / 35 test cases passed.
 * Status: Accepted
 * Runtime: 4 ms
 */
 func rotate(nums []int, k int)  {
    sz := len(nums)
    k = k % sz
    reverse(nums, 0, sz - k - 1);
    reverse(nums, sz - k, sz - 1)
    reverse(nums, 0, sz - 1);
}

func reverse(nums []int, begin, end int) {
    for begin < end {
        nums[begin], nums[end] = nums[end], nums[begin]
        begin++
        end--
    }
}
