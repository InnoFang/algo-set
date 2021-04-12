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

/**
 * 229 / 229 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 11.1 MB 
 */
class Solution2 {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> strs;
        for (auto& num: nums) {
            strs.push_back(to_string(num));
        }
        sort(strs.begin(), strs.end(), [](const string& a, const string& b) {
            return a + b > b + a;
        });
        
        if (strs[0] == "0") return "0";

        string ans = "";
        for (auto& str: strs) {
            ans += str;
        }
        return ans;
    }
};
