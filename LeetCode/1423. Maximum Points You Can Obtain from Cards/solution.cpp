/**
 * 40 / 40 test cases passed.
 * Status: Accepted
 * Runtime: 76 ms
 */
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int maxSum = accumulate(cardPoints.begin(), cardPoints.begin() + k, 0);
        int ans = maxSum;
        for (int i = 0; i < k; ++ i) {
            maxSum = maxSum - cardPoints[k - 1 - i] + cardPoints[cardPoints.size() - 1 - i];
            ans = max(ans, maxSum);
        }
        return ans;
    }
};

