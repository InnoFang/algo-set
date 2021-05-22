/**
 * 168 / 168 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 12.5 MB 
 */
class Solution {
public:
    bool xorGame(vector<int>& nums) {
        if (nums.size() % 2 == 0) return true;
        int sum = 0;
        for (auto& num: nums) sum ^= num;
        return sum == 0;
    }
};
