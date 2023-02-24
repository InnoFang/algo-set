/**
 * Runtime: 4 ms
 * Memory Usage: 8.3 MB 
 */
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> rec;
        for (auto &num: nums) rec.emplace(num);
        return rec.size() - rec.count(0);
    }
};
