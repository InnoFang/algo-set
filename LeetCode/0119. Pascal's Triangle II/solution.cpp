/**
 * 34 / 34 test cases passed.
 * Status: Accepted
 * Runtime: 0 ms
 */
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex + 1);
        row[0] = 1;
        for (int i = 1; i < row.size(); ++ i) {
            row[i] = 1LL * row[i - 1] * (rowIndex - i + 1) / i;
        }
        return row;
    }
};
