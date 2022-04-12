/**
 * 27 / 27 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 2 MB 
 */
impl Solution {
    pub fn number_of_lines(widths: Vec<i32>, s: String) -> Vec<i32> {
        s.bytes().fold(vec![1i32, 0i32], |mut line, width| {
            let w = widths[(width - b'a') as usize];
            line[1] += w;
            if line[1] > 100 {
                line[0] += 1;
                line[1] = w;
            }
            line
        })
    }
}
