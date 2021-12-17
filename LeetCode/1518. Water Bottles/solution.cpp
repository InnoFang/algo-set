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
