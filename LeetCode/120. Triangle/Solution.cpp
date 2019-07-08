#include <iostream>
#include <vector>

using namespace std;

/**
 * 	Time Limit Exceed
 */
class TLESolution {
public:
    int minimumTotal(vector<vector<int>>& triangle, int row, int col) {
        if (row == triangle.size() - 1) return triangle[row][col];
        return triangle[row][col] + 
        min(minimumTotal(triangle, row + 1, col), minimumTotal(triangle, row + 1, col + 1));
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        return minimumTotal(triangle, 0, 0);
    }
};

/**
 * 43 / 43 test case passed
 * Status: Accepted
 * Runtime: 8 ms
 */
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        for (int i = triangle.size() - 2; i >= 0; -- i) {
            for (int j = 0; j < triangle[i].size(); ++ j) {
                triangle[i][j] += min(triangle[i + 1][j], triangle[i + 1][j + 1]);
            }
        }
        return triangle[0][0];
    }
};

int main () {
    vector<vector<int>> triangle;
    int data[4][4] = {
        {2},
        {3, 4},
        {6, 5, 7},
        {4, 1, 8, 3}};
    for (int i = 0; i < 4; ++ i) {
        vector<int> row;
        for (int j = 0; j <= i; ++ j) {
            row.push_back(data[i][j]);
        }
        triangle.push_back(row);
    }
    cout << Solution().minimumTotal(triangle) << endl;
}