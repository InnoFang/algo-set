/**
 * 89 / 89 test cases passed.
 * Status: Accepted
 * Runtime: 80 ms
 */
class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        if (arr.size() < 2) return arr.size();

        int ans = 0;
        bool turblence = arr[0] > arr[1];
        for (int l = 0, r = 1; r < arr.size(); ++ r) {
            bool current = arr[r] > arr[r - 1];
            if (current == turblence) {
                l = r - 1;
            } 
            if (arr[r] == arr[r - 1]) {
                l = r;
            }
            turblence = current;
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};

