/**
 * 34 / 34 test cases passed.
 * Runtime: 16 ms
 * Memory Usage: 11.2 MB 
 */
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 1, r = arr.size() - 1;
        while (l < r) {
            int mid = l + r + 1 >> 1;
            if (arr[mid - 1] < arr[mid]) {
                l = mid;
            } else {
                r = mid - 1;
            }
        }
        return l;
    }
};
