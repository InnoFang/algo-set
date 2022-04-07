/**
 * 47 / 47 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 2.2 MB 
 */
impl Solution {
    pub fn rotate_string(s: String, goal: String) -> bool {
        s.len() == goal.len() && s.repeat(2).contains(&goal)
    }
}
