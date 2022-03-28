/**
 * 204 / 204 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 1.9 MB 
 */
impl Solution {
    pub fn has_alternating_bits(n: i32) -> bool {
        let x = n ^ (n >> 1);       
        x & (x + 1) == 0
    }
}