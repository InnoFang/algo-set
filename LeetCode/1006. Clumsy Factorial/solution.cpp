/**
 * 84 / 84 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.8 MB 
 */
class Solution {
public:
    /**
     * clumsy(N) = N * (N-1) / (N-2) + (N-3) - (N-4) * ....
     * 先看第一项 N * (N-1) / (N-2) = N + 1 + 1 / (N/2 - 1)
     * 如果 (N/2 - 1) > 1 则后面一项可以省略，即 N>4 时，clumsy(N) = N + 1
     * 当 N <= 4 时，分情况讨论
     * clumsy(1) = 1             = 1
     * clumsy(2) = 2 * 1         = 2
     * clumsy(3) = 3 * 2 / 1     = 6
     * clumsy(4) = 4 * 3 / 2 + 1 = 7
     * 当 N > 4 时，分情况讨论
     * N % 4 == 0 时，如 N=8 时，clumsy(8) = 8 * 7 / 6 + 5 - 4 * 3 / 2 + 1
     *                                     = (8 + 1) + 5 - 6 + 1 = (8 + 1)  ==> N % 4 == 0 时 clumsy(N) = N + 1
     * N % 4 == 1 时，如 N=9 时，clumsy(9) = 9 * 8 / 7 + 6 - 5 * 4 / 3 + 2 - 1
     *                                     = (9 + 1) + 6 - (5 + 1) + 2 - 1 = (9 + 1) + 1  ==> N % 4 == 1 时 clumsy(N) = (N + 1) + 1 = N + 2
     * N % 4 == 2 时，如 N=10 时，clumsy(10) = 10 * 9 / 8 + 7 - 6 * 5 / 4 + 3 - 2 * 1
     *                                       = (10 + 1) + 7 - (6 + 1) + 3 - 2 = (10 + 1) + 1  ==> N % 4 == 2 时 clumsy(N) = (N + 1) + 1 = N + 2
     * N % 4 == 3 时，如 N=11 时，clumsy(11) = 11 * 10 / 9 + 8 - 7 * 6 / 5 + 4 - 3 * 2 / 1
     *                                       = (11 + 1) + 8 - (7 + 1) + 4 - 6 = (10 + 1) - 2  ==> N % 4 == 3 时 clumsy(N) = (N + 1) - 2 = N - 1
     */
    int clumsy(int N) {
        if (N == 1) return 1;
        if (N == 2) return 2;
        if (N == 3) return 6;
        if (N == 4) return 7;
        if (N % 4 == 0) return N + 1;
        if (N % 4 == 1 || N % 4 == 2) return N + 2;
        return N - 1;
    }
};
