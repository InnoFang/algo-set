/**
 * 28 / 28 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.9 MB 
 */
class Solution {
public:
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        if (jug1Capacity + jug2Capacity < targetCapacity) return false;
        if (jug1Capacity == 0 || jug2Capacity == 0) return targetCapacity == 0 || jug2Capacity + jug2Capacity == targetCapacity;
        return targetCapacity % __gcd(jug1Capacity, jug2Capacity) == 0;
    }
};
