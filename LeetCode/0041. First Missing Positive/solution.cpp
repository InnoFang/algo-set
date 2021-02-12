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

