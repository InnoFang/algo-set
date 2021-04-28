/**
 * 124 / 124  test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 5.8 MB 
 */
class Solution {
public:
    bool judgeSquareSum(int c) {
        for (size_t a = 0; a * a <= c; ++ a) {
            double b = sqrt(c - a * a);
            if (b == (int) b) return true;
        }
        return false;
    }
};

/**
 * 124 / 124  test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 5.8 MB 
 */
class Solution2 {
public:
    bool judgeSquareSum(int c) {
        long l = 0;
        long r = sqrt(c);
        while (l <= r) {
            long sum = l * l + r * r;
            if (sum == c) return true;
            if (sum > c) r --;
            else l ++ ;
        }
        return false;
    }
};
