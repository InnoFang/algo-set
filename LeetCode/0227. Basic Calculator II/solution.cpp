/**
 * 48 / 48 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 10.2 MB 
 */
class Solution {
public:
    int calculate(string s) {
        string formula = s + '$';
        vector<long long> nums;
        long long num = 0;
        char sign = '+';
        for (auto& c: formula) {
            if (c == ' ') continue;
            if (isdigit(c)) num = num * 10 + c - '0';
            else {
                if (sign == '+') nums.push_back(num);
                else if (sign == '-') nums.push_back(-num);
                else if (sign == '*') nums[nums.size() - 1] = nums.back() * num;
                else if (sign == '/') nums[nums.size() - 1] = nums.back() / num;
                num = 0;
                sign = c;
            }
        }
        return accumulate(nums.begin(), nums.end(), 0);
    }
};
