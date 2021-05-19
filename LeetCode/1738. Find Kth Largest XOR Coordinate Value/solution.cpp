/**
 * 49 / 49 test cases passed.
 * Runtime: 628 ms
 * Memory Usage: 109.4 MB 
 */
class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        vector<vector<int>> prefixSum(matrix.size() + 1, vector<int>(matrix[0].size() + 1));
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < matrix.size(); ++ i) {
            for (int j = 0; j < matrix[0].size(); ++ j) {
                prefixSum[i + 1][j + 1] = prefixSum[i + 1][j] ^ prefixSum[i][j + 1] ^ prefixSum[i][j] ^ matrix[i][j];
                if (pq.size() < k) {
                    pq.push(prefixSum[i + 1][j + 1]);
                } else {
                    if (prefixSum[i + 1][j + 1] > pq.top()) {
                        pq.pop();
                        pq.push(prefixSum[i + 1][j + 1]);
                    }
                }
            }
        }
        return pq.top();
    }   
};
