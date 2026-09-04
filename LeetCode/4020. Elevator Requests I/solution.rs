impl Solution {
    pub fn elevator_requests(n: i32, requests: Vec<i32>) -> i32 {
        let mut prev = 0;
        let mut total = 0;
        for &item in &requests {
            total += (item - prev).abs();
            prev = item;
        }

        total
    }
}
