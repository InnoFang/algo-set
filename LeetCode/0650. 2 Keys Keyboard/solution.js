/**
 * 126 / 126 test cases passed.
 * Runtime: 64 ms
 * Memory Usage: 37.8 MB 
 *
 * @param {number} n
 * @return {number}
 */
var minSteps = function(n) {
    if (n == 1) return 0; 
    let x;
    for (x = n >> 1; n % x != 0; x--) {} 
    return minSteps(x) + (n / x);
};
