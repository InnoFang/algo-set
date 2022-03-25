/**
 * 500 / 500 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 2 MB 
 */
impl Solution {
    pub fn trailing_zeroes(mut n: i32) -> i32 {
        let mut ans = 0;        
        while n > 0 {
            ans += n / 5;
            n /= 5;
        }
        ans
    }
}
