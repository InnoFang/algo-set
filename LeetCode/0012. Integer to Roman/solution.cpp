/**
 * 3999 / 3999 test cases passed.
 * Runtime: 20 ms
 * Memory Usage: 9.2 MB 
 */
class Solution {
public:
    const vector<pair<int, string>> romans = {
        {1000, "M"},
        {900, "CM"},
        {500, "D"},
        {400, "CD"},
        {100, "C"},
        {90, "XC"},
        {50, "L"},
        {40, "XL"},
        {10, "X"},
        {9, "IX"},
        {5, "V"},
        {4, "IV"},
        {1, "I"},
    };
    string intToRoman(int num) {
        string ans = "";
        for (auto& [value, symbol]: romans) {
            while (num - value >= 0) {
                ans += symbol;
                num -= value;
            }
        }
        return ans;
    }
};
