/**
 * 169 / 169 test cases passed.
 * Status: Accepted
 * Runtime: 0 ms
 */
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> store(nums.size() + 1);
        for (auto& num : nums) {
            if (num > 0 && num <= nums.size()) 
                store[num] = num;
        }
        for (int i = 1; i <= nums.size(); ++ i) {
            if (store[i] == 0) 
                return i; 
        }
        return nums.size() + 1;
    }
};

/**
 * 169 / 169 test cases passed.
 * Status: Accepted
 * Runtime: 0 ms
 */
class Solution2 {
public:
    int firstMissingPositive(vector<int>& nums) {
        for (auto& num : nums) {
            while (num > 0 && num <= nums.size() && nums[num - 1] != num) {
                swap(nums[num - 1], num);
            }
        }
        for (int i = 0; i < nums.size(); ++ i) {
            if (nums[i] != i + 1) 
                return i + 1; 
        }
        return nums.size() + 1;
    }
};

