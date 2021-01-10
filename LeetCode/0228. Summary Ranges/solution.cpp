/**
 * 28 / 28 test cases passed.
 * Status: Accepted
 * Runtime: 4 ms
 */
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans; 
        if (nums.size() == 0) return ans;
        for (int i = 0; i < nums.size(); ++ i) {
            int tmp = nums[i];
            int j = i + 1;
            for (; j < nums.size(); ++ j) {
                if (nums[j] == tmp + 1) {
                    tmp = nums[j];
                } else {
                    if (tmp == nums[i])
                        ans.push_back( to_string(nums[i]) );
                    else 
                        ans.push_back( to_string(nums[i]) + "->" + to_string(tmp) );
                    j -= 1;
                    i = j;
                    break;
                }
            }
            if (i == nums.size() - 1) {
                ans.push_back( to_string(nums[i]) );
            } else if (j == nums.size()) {
                ans.push_back( to_string(nums[i]) + "->" + to_string(tmp) );
                break;
            }
        }
        return ans; 
    }
};

/**
 * 28 / 28 test cases passed.
 * Status: Accepted
 * Runtime: 0 ms
 */
class Solution2 {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans; 
        if (nums.size() == 0) return ans;
        int low = 0;
        for (int high = 0; high < nums.size(); ++ high) {
            if (high + 1 == nums.size() || nums[high] + 1 != nums[high + 1]) {
                string tmp = to_string(nums[low]);
                if (low != high) {
                    tmp += "->" + to_string(nums[high]);
                }
                ans.push_back(tmp);
                low = high + 1;
            }
        }
        return ans; 
    }
};

