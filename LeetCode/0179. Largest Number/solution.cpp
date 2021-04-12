/**
 * 229 / 229 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 10.8 MB 
 */
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int& a, int& b) {
            string sa = to_string(a);
            string sb = to_string(b);
            return sa + sb > sb + sa;
        });
        if (nums[0] == 0) return "0";
        
        string ans = "";
        for (auto& num: nums) {
            ans += to_string(num);
        }
        return ans;
    }
};
