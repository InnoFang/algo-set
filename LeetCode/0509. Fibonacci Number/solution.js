/**
 * 31 / 31 test cases passed
 * Status: Accepted
 * Runtime: 64 ms
 * @param {number} N
 * @return {number}
 */
var fib = function(N) {
    if (N < 2) return N
    let f1 = 0, f2 = 1
    for (let i = 2; i <= N; i++) {
        f2 = f1 + f2
        f1 = f2 - f1
    }
    return f2
};
