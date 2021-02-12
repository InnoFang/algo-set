/**
 * 34 / 34 test cases passed.
 * Status: Accepted
 * Runtime: 56 ms
 */
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (auto& num : nums) {
            while (num != nums[num - 1]) {
                swap(num, nums[num - 1]);
            }
        }
        vector<int> ans;
        for (int i = 0; i < nums.size(); ++ i) {
            if (i + 1 != nums[i]) {
                ans.push_back(i + 1);
            }
        }
        return ans;
    }
};

