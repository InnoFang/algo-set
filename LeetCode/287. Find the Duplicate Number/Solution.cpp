#include <unordered_map>
using namespace std;

/**
 * Status: Accepted
 * Runtime: 16ms
 */
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> dict;
        for (int i = 0; i < nums.size(); ++ i) {
            if (dict.find(nums[i]) == dict.end()) dict[nums[i]] = 0;
            dict[nums[i]]++;
            if (dict[nums[i]] == 2) return nums[i];
        }
        return -1;
    }
};