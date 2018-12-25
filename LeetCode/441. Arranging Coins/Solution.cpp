#include <cmath>

/**
 * status: Accepted
 * runtime: 24ms
 */ 
class Solution {
public:
    int arrangeCoins(int n) { 
        return (sqrt(1 + 8 * double(n)) - 1) / 2;
    }
};