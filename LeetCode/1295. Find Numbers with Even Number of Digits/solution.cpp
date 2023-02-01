/**
 * Runtime: 8 ms
 * Memory Usage: 9.8 MB 
 */
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        return accumulate(nums.begin(), nums.end(), 0, [](int ans, int num) {
            return ans + ((int)(log10(num) + 1) % 2 == 0) ;
        });
    }
};
