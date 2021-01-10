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

