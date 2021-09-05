
// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

/**
 * 12 / 12 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 8 MB 
 */
class Solution {
public:
    int rand10() {
        for (;;) {
            int ans = (rand7() - 1) * 7 + (rand7() - 1);
            if (1 <= ans && ans <= 40) return (ans % 10) + 1;
        }
    }
};
