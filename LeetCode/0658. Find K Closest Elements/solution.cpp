/**
 * 66 / 66 test cases passed.
 * Runtime: 28 ms
 * Memory Usage: 30.2 MB 
 */
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int right = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
        int left = right - 1;
        while (k --> 0) {
            if (left < 0) {
                ++ right;
            } else if (right >= arr.size()) {
                -- left;
            } else if (x - arr[left] <= arr[right] - x) {
                -- left;
            } else {
                ++ right;
            }
        }
        vector<int> ans(arr.begin() + left + 1, arr.begin() + right);
        return ans;
    }
};
