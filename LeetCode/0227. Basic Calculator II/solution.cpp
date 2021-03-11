/**
 * 109 / 109 test cases passed.
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

/**
 * 109 / 109 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 9.8 MB 
 */
class Solution {
public:
    int calculate(string s) {
        vector<long> nums;
        long num = 0;
        char sign = '+';
        for (int i = 0; i < s.size(); ++ i) {
            char c = s[i];
            if (isdigit(c)) num = num * 10 + c - '0';
            if (!isdigit(c) && c != ' ' || i == (s.size() - 1)) {
                if (sign == '+') nums.push_back(num);
                else if (sign == '-') nums.push_back(-num);
                else if (sign == '*') nums.back() *= num;
                else if (sign == '/') nums.back() /= num;
                num = 0;
                sign = c;
            }
        }
        return accumulate(nums.begin(), nums.end(), 0);
    }
};

