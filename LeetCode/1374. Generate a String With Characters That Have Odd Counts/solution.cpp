/**
 * 103 / 103 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.3 MB 
 */
class Solution {
public:
    string generateTheString(int n) {
        if (n & 1) return string(n, 'a');
        return string(n - 1, 'a') + 'b';
    }
};
