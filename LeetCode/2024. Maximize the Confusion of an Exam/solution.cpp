/**
 * 93 / 93 test cases passed.
 * Runtime: 24 ms
 * Memory Usage: 9.7 MB 
 */
class Solution {
public:
    int maxConsecutive(const string &answerKey, int k, char ch) {
        int ans = 0, l = 0;
        for (int r = 0; r < answerKey.size(); ++ r) {
            if (answerKey[r] != ch) k--;
            while (k < 0) {
                if (l < r && answerKey[l] != ch) {
                    ++ k;
                }
                ++ l;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
    
    int maxConsecutiveAnswers(string answerKey, int k) {
        return max(maxConsecutive(answerKey, k, 'T'), maxConsecutive(answerKey, k, 'F'));
    }
};
