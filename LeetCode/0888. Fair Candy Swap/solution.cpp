/**
 * 75 / 75 test cases passed.
 * Status: Accepted
 * Runtime: 116 ms
 */
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int sumA = accumulate(A.begin(), A.end(), 0);
        int sumB = accumulate(B.begin(), B.end(), 0);
        int delta = (sumA - sumB) / 2;
        unordered_set<int> setA(A.begin(), A.end());
        for (auto& b : B) {
            if (setA.find(b + delta) != setA.end()) {
                return vector<int> { b + delta, b };
            }
        }
        return vector<int>{};
    }
};

