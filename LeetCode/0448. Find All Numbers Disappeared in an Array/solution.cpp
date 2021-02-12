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

/**
 * 34 / 34 test cases passed.
 * Status: Accepted
 * Runtime: 48 ms
 */
class Solution2 {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (auto& num : nums) {
            nums[(num - 1) % nums.size()] += nums.size();
        }
        vector<int> ans;
        for (int i = 0; i < nums.size(); ++ i) {
            if (nums[i] <= nums.size()) {
                ans.push_back(i + 1);
            }
        }
        return ans;
    }
};

