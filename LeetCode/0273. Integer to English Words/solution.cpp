/**
 * 601 / 601 test cases passed.
 * Runtime: 8.6 ms
 * Memory Usage: 4 MB 
 */
class Solution {
public:
    string numberToWords(int num) {
        if (num == 0) return "Zero";

        stack<uint16_t> segms;
        for (; num > 0; num /= 1000) {
            uint16_t segm = num % 1000; 
            segms.emplace(segm);
        }

        string ans;
        while (!segms.empty()) {
            string words = _3DigitSegm(segms.top());
            if (segms.top() != 0)
                words += segm_unit[segms.size()];
            ans += words;
            segms.pop();
        }

        ans.pop_back();
        return ans;
    }

private:
    string _3DigitSegm(uint16_t segm) {
        uint16_t dig = segm % 10;
        uint16_t ten = (segm % 100) / 10;
        uint16_t thu = segm / 100;

        string ret;
        if (thu != 0) ret += dict[thu] + " Hundred ";
        if (ten == 1) {
            ret += dict[ten * 10 + dig] + " ";
            return ret;
        }
        if (ten != 0) {
            ret += dict[ten * 10] + " ";
            if (dig != 0) ret += dict[dig] + " ";
            return ret;
        } 
        if (dig != 0) ret += dict[dig] + " ";
        return ret;
    }

private:
    unordered_map<int, string> dict {
        {1, "One"},        {2, "Two"},       {3, "Three"},
        {4, "Four"},       {5, "Five"},      {6, "Six"},
        {7, "Seven"},      {8, "Eight"},     {9, "Nine"},
        {11, "Eleven"},    {12, "Twelve"},   {13, "Thirteen"},
        {14, "Fourteen"},  {15, "Fifteen"},  {16, "Sixteen"},
        {17, "Seventeen"}, {18, "Eighteen"}, {19, "Nineteen"},
        {10, "Ten"},       {20, "Twenty"},   {30, "Thirty"},
        {40, "Forty"},     {50, "Fifty"},    {60, "Sixty"},
        {70, "Seventy"},   {80, "Eighty"},   {90, "Ninety"}, 
    };

    unordered_map<int, string> segm_unit {
        {2, "Thousand "},  {3, "Million "},  {4, "Billion "},
    };
};
