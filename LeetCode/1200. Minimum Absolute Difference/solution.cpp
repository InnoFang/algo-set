/**
 * 37 / 37 test cases passed.
 * Runtime: 56 ms
 * Memory Usage: 31.4 MB 
 */
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int min_abs = INT_MAX;
        vector<vector<int>> ans;
        for (int i = 0; i < arr.size() - 1; ++ i) {
            int delta = arr[i + 1] - arr[i];
            if (delta < min_abs) {
                min_abs = delta;
                ans = {{arr[i], arr[i + 1]}};
            } else if (delta == min_abs) {
                ans.push_back({arr[i], arr[i + 1]});
            }
        }
        return ans;
    }
};
