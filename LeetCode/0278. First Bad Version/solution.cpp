// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

/**
 * 22 / 22 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 5.9 MB 
 */
class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1, r = n;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (isBadVersion(mid)) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        return r;
    }
};
