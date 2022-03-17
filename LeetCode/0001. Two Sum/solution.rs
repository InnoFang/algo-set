use std::collections::HashMap;

/**
 * 57 / 57 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 2.5 MB 
 */
impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut cache = HashMap::new();
        for (i, num) in nums.iter().enumerate() {
            if let Some(n) = cache.get(&(target - num)) {
                return vec![*n, i as i32];
            }
            cache.insert(num, i as i32);
        }
        vec![]
    }
}
