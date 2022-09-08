/**
 * 70 / 70 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 7.6 MB 
 */
class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> answer;
        for (int i = 1; i < n - k; ++i) {
            answer.push_back(i);
        }
        for (int i = n - k, j = n; i <= j; ++i, --j) {
            answer.push_back(i);
            if (i != j) {
                answer.push_back(j);
            }
        }
        return answer;
    }
};
