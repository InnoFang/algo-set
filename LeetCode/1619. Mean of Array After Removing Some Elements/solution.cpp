/**
 * 50 / 50 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 9.1 MB 
 */
class Solution {
public:
    double trimMean(vector<int>& arr) {
        double ans = 0;
        sort(arr.begin(), arr.end());
        size_t len = arr.size();
        for (int i = len / 20, end = len * 19/20; i < end; ++i) {
            ans += arr[i];
        }
        return ans / (len * 0.9);
    }
};
