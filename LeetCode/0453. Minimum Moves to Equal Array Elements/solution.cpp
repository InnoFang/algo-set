/**
 * 84 / 84 test cases passed.
 * Runtime: 28 ms
 * Memory Usage: 27.6 MB 
 */
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int min = *min_element(nums.begin(), nums.end());
        return sum - nums.size() * min;
    }
}
