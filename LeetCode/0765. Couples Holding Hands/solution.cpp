/**
 * 56 / 56 test cases passed.
 * Status: Accepted
 * Runtime: 4 ms
 */
class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        int n = row.size();
        vector<int> cache(n);
        for (int i = 0; i < n; ++ i) {
            cache[row[i]] = i;
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i += 2) {
            int couple = row[i] ^ 1;
            if (row[i + 1] != couple) {
                int coupleIdx = cache[couple];
                cache[row[i + 1]] = coupleIdx;
                cache[row[coupleIdx]] = i + 1;
                swap(row[coupleIdx], row[i + 1]);
                ans++;
            }
        }
        return ans;
    }
};

/**
 * 56 / 56 test cases passed.
 * Status: Accepted
 * Runtime: 0 ms
 */
// refer2: https://leetcode-cn.com/problems/couples-holding-hands/solution/cbing-cha-ji-best-100wo-hen-a-by-feng-zi-iw0m/
class Solution {
public:
    int find(int x) {
        return x == p[x] ? p[x] : p[x] = find(p[x]);
    }
    void merge(int a, int b) {
        p[find(a)] = p[find(b)];
    }
    int minSwapsCouples(vector<int>& row) {
        int n = row.size();
        p.resize(n);
        for (int i = 0; i < n; ++ i) p[i] = i;
        for (int i = 0; i < n; i += 2) {
            merge(row[i] / 2, row[i + 1] / 2);
        }
        int cnt = 0;
        for (int i = 0; i < n / 2; ++ i) {
            if (find(i) == i) {
                cnt ++;
            }
        }
        // 情侣总数 - 并查集个数
        return n / 2 - cnt;
    }
private:
    vector<int> p;
};

