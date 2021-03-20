/**
 * 20 / 20 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 11.5 MB 
 */
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> nums(tokens.size());
        int top = -1;
        for (auto& token: tokens) {
            if ("+" == token) {
                int result = nums[top - 1] + nums[top];
                nums[--top] = result;
            } else if ("-" == token) {
                int result = nums[top - 1] - nums[top];
                nums[--top] = result;
            } else if ("*" == token) {
                int result = nums[top - 1] * nums[top];
                nums[--top] = result;
            } else if ("/" == token) {
                int result = nums[top - 1] / nums[top];
                nums[--top] = result;
            } else {
                nums[++top] = stoi(token);
            }
        }
        return nums[top];
    }
};

