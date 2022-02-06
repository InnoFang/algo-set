/**
 * 73 / 73 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 7.9 MB 
 */
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> buckets;
        buckets.reserve(100);
        for (auto &num : nums) buckets[num] += 1;
        int sum = 0;
        for (auto &[num, cnt] : buckets) {
            if (cnt == 1) sum += num;
        }
        return sum;
    }
};
