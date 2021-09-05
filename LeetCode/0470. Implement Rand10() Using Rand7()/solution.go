/**
 * 12 / 12 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 5.5 MB
 */
func rand10() int {
	for {
		ans := (rand7()-1)*7 + (rand7() - 1)
		if 1 <= ans && ans <= 40 {
			return ans%10 + 1
		}
	}
}
