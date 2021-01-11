/**
 * 92 / 92 test cases passed.
 * Status: Accepted
 * Runtime: 384 ms
 */
class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> outDegree(N + 1, 0);
        vector<int> inDegree(N + 1, 0);
        for (auto& pair: trust) {
            outDegree[pair[0]] ++;
            inDegree[pair[1]] ++;
        }
        for (int i = 1; i <= N; ++ i) {
            if (inDegree[i] == N -1 && outDegree[i] == 0) {
                return i;
            }
        }
        return -1;
    }
};

/**
 * 92 / 92 test cases passed.
 * Status: Accepted
 * Runtime: 372 ms
 */
class Solution2 {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> degree(N + 1);
        for (auto& pair: trust) {
            degree[pair[0]] --;
            degree[pair[1]] ++;
        }
        for (int i = 1; i <= N; ++ i) {
            if (degree[i] == N -1) {
                return i;
            }
        }
        return -1;
    }
};

