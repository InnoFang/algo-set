/**
 * 366 / 366 test cases passed.
 * Runtime: 72 ms
 * Memory Usage: 48.2 MB 
 */
class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool inc = true, dec = true;
        for (int i = 0; i < A.size() - 1 && (inc || dec); ++ i) {
            if (A[i] < A[i + 1]) dec = false;
            if (A[i] > A[i + 1]) inc = false;
        }
        return inc || dec;
    }
};

/**
 * 366 / 366 test cases passed.
 * Runtime: 56 ms
 * Memory Usage: 48.4 MB 
 */
class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        return is_sorted(A.begin(), A.end()) || is_sorted(A.rbegin(), A.rend());
    }
};
