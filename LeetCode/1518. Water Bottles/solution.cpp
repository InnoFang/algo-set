/**
 * 64 / 64 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.8 MB 
 */
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        while (numBottles >= numExchange) {
            int rest = numBottles % numExchange;
            numBottles /= numExchange;
            ans += numBottles;
            numBottles += rest;
        }
        return ans;
    }
};

/**
 * 64 / 64 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.8 MB 
 */
class Solution2 {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        return numBottles + (numBottles - 1) / (numExchange - 1); 
    }
};

/**
 * 64 / 64 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.9 MB 
 */
class Solution3 {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        if (numBottles < numExchange) return numBottles;
        int exchange = numBottles / numExchange;
        return exchange * numExchange + numWaterBottles(exchange + numBottles % numExchange, numExchange); 
    }
};
