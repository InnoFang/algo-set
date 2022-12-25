/**
 * Runtime: 0 ms
 * Memory Usage: 13.5 MB 
 */
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for (const auto& op: operations) {
            x += op[1] == '+' ? 1 : -1;
        }
        return x;
    }
};
