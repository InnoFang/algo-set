/**
 * 34 / 34 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 2.2 MB 
 */
impl Solution {
    pub fn maximum_wealth(accounts: Vec<Vec<i32>>) -> i32 {
        accounts.into_iter().fold(0i32, |ans, account| ans.max(account.iter().sum()))
    }
}
