/**
 * 203 / 203 test cases passed.
 * Runtime: 16 ms
 * Memory Usage: 2.3 MB 
 */
impl Solution {
    pub fn image_smoother(img: Vec<Vec<i32>>) -> Vec<Vec<i32>> {
        let (m, n) = (img.len(), img[0].len());
        let mut ret = vec![vec![0; n]; m];
        for i in 0..m {
            for j in 0..n {
                let mut count = 0;
                for x in [i - 1, i, i + 1] {
                    for y in [j - 1, j, j + 1] {
                        if 0 <= x && x < m && 0 <= y && y < n {
                            ret[i][j] += img[x][y];
                            count += 1;
                        }
                    }
                }
                ret[i][j] /= count;
            }
        }
        ret
    }
}

/**
 * 203 / 203 test cases passed.
 * Runtime: 16 ms
 * Memory Usage: 2.3 MB 
 */
use std::cmp::{max, min};
impl Solution2 {
    pub fn image_smoother(img: Vec<Vec<i32>>) -> Vec<Vec<i32>> {
        let (m, n) = (img.len(), img[0].len());
        let mut psum = vec![vec![0; n + 1]; m + 1];
        let mut ret = vec![vec![0; n]; m];
        for i in 1..=m {
            for j in 1..=n {
                psum[i][j] = psum[i - 1][j] + psum[i][j - 1] - psum[i - 1][j - 1] + img[i - 1][j - 1];
            }
        }
        for i in 0..m {
            for j in 0..n {
                let top = max(0, i as i32 - 1) as usize;
                let left = max(0, j as i32 - 1) as usize;
                let right = min(j + 1, n - 1);
                let bottom = min(i + 1, m - 1);
                let count = (bottom - top + 1) * (right - left + 1);
                ret[i][j] = psum[bottom + 1][right + 1] - psum[bottom + 1][left] - psum[top][right + 1] + psum[top][left];
                ret[i][j] /= count as i32;
            }
        }
        ret
    }
}
