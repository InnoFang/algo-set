/**
 * 195 / 195 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 1.9 MB 
 */
 func reachingPoints(sx int, sy int, tx int, ty int) bool {
    for tx >= sx && ty >= sy {
        if tx == sx && ty == sy { return true }
        if tx > ty {
            if tx - sx < ty { break }
            tx -= ((tx - sx) / ty) * ty
        } else {
            if ty - sy < tx { break }
            ty -= ((ty - sy) / tx) * tx
        }
    }    
    return false
}
