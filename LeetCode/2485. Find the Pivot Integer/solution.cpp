/**
 * Runtime: 0 ms
 * Memory Usage: 5.8 MB 
 */
class Solution {
public:
    int pivotInteger(int n) {
        double x = sqrt(n * (n + 1) / 2.0);
        return x == int(x) ? int(x) : -1;
    }
};
