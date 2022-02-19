/**
 * 215 / 215 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 10.9 MB 
 */
class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        ans.reserve(n << 1);
        for (int i = n; i > 1; -- i) {
            int idx = max_element(arr.begin(), arr.begin() + i) - arr.begin();
            if (idx == i - 1) continue;
            reverse(arr.begin(), arr.begin() + idx + 1);
            reverse(arr.begin(), arr.begin() + i);
            ans.push_back(idx + 1);
            ans.push_back(i);
        }
        return ans;
    }
};
