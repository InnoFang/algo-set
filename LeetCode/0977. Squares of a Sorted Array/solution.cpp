/**
 * 132 / 132 test cases passed
 * Status: Accepted
 * Runtime: 72 ms
 */
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int left = 0, right = A.size() - 1, idx = A.size() - 1;
        vector<int> ans ( A.size() );
        while ( left <= right ) {
            if ( - A[left] < A[right] ) {
                ans[ idx -- ] = A[right] * A[ right -- ];
            } else {
                ans[ idx -- ] = A[left] * A[ left ++ ];
            }
        }
        return ans;
    }
};


