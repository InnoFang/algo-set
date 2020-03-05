#include <unordered_map>
using namespace std;

/**
 * Status: Accepted
 * Runtime: 32 ms
 */
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> dict;
        for (int i = 0; i < nums.size(); ++i) {
            if (dict.find(nums[i]) != dict.end()) dict[nums[i]] ++;
            else dict[nums[i]] = 1;
        }
        return nums.size() != dict.size();
    }
};