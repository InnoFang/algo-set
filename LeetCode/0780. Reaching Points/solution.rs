/**
 * 195 / 195 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 2 MB 
 */
impl Solution {
    pub fn reaching_points(sx: i32, sy: i32, tx: i32, ty: i32) -> bool {
        let (mut tx, mut ty) = (tx, ty);
        while tx >= sx && ty >= sy {
            if tx == sx && ty == sy {
                return true;
            }
            if tx > ty {
                if tx - sx < ty {
                    break;
                }
                tx -= ((tx - sx) / ty) * ty;
            } else {
                if ty - sy < tx {
                    break;
                }
                ty -= ((ty - sy) / tx) * tx;
            }
        }
        false
    }
}
