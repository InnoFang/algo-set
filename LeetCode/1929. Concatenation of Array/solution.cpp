/**
 * Runtime: 4 ms
 * Memory Usage: 12.5 MB 
 */
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        nums.insert(nums.end(), nums.begin(), nums.end());
        return nums;        
    }
};
