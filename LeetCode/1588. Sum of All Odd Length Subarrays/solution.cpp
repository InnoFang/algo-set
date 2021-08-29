/**
 * 96 / 96 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 8.1 MB 
 */
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        vector<int> prefixSum { 0 };
        for (auto& num: arr) {
            prefixSum.emplace_back( prefixSum.back() + num );
        }
        int ans = 0;
        for (int i = 0; i < arr.size(); ++ i) {
            for (int range = 1; i + range - 1 < arr.size(); range += 2) {
                ans += prefixSum[i + range] - prefixSum[i];
            }
        }
        return ans;
    }
};

/**
 * 96 / 96 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 8.1 MB 
 */
class Solution2 {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans = 0;
        int n = arr.size(); 
        for (int i = 0; i < n; i ++ ) {
            int leftCount = i, rightCount = n - i - 1,
                leftOdd = (leftCount + 1) >> 1, rightOdd = (rightCount + 1) >> 1,
                leftEven = (leftCount >> 1) + 1, rightEven = (rightCount >> 1) + 1;
            ans += arr[i] * (leftOdd * rightOdd + leftEven * rightEven);
        }
        return ans;
    }
};
