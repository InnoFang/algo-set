/**
 * 77 / 77 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 10 MB 
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> dic;
        for (int i = 0; i < nums.size(); i++) {
            int val = target - nums[i];
            if (dic.find(val) != dic.end()) {
                vector<int> res;
                res.push_back(dic[val]);
                res.push_back(i);
                return res;
            } else dic[nums[i]] = i;
        }
        return vector<int>();
    }
};
