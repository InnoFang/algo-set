// 109 / 109 test cases passed.
// Status: Accepted
// Runtime: 4 ms

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; -- i) {
            if (digits[i] < 9) {
                digits[i] ++;
                return digits;
            } else {
                digits[i] = 0;
            }
        } 
        if (digits[0] == 0) digits.insert(digits.begin(), 1);
        return digits;
    }
};