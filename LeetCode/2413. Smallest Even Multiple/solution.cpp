/**
 * Runtime: 0 ms
 * Memory Usage: 5.8 MB 
 */
class Solution {
public:
    int smallestEvenMultiple(int n) {
        return n & 1 ? n << 1 : n; 
    }
};
