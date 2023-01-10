/**
 * Runtime: 4 ms
 * Memory Usage: 8.7 MB 
 */
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int> rec;
        int ans = 0;
        for (const auto& num: nums) {
            if (rec.count(num - 2 * diff) && rec.count(num - diff)) {
                ++ ans;
            }
            rec.emplace(num);
        }
        return ans;
    }
};
