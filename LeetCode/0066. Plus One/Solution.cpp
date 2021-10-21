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

// 111 / 111 test cases passed.
// Status: Accepted
// Runtime: 4 ms
class Solution2 {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] == 9) digits[i] = 0;
            else {
                digits[i] += 1;
                return digits;
            }
        }  
        vector<int> ans(n + 1);
        ans[0] = 1;
        return ans;
    }
};
