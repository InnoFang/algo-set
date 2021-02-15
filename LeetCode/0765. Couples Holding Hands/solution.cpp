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
        int m = n / 2;
        p.resize(m);
        for (int i = 0; i < m; ++ i) p[i] = i;
        for (int i = 0; i < n; i += 2) {
            merge(row[i] / 2, row[i + 1] / 2);
        }
        int cnt = 0;
        for (int i = 0; i < m; ++ i) {
            if (find(i) == i) {
                cnt ++;
            }
        }
        // 情侣总数 - 并查集个数
        return m - cnt;
    }
private:
    vector<int> p;
};

/**
对于解法2（Solution2）中关于答案：情侣总对数 - 并查集个数的解释 

并查集的个数，表示有多少情侣被分成了一堆，注意是一堆，不是简单的一对
如果 A1 和 A2 是一对情侣，那么并查集 union 这两人时，肯定是单独分到一堆的，其他人不会与之混淆
相反，A1 和 B1 肯定不是一对情侣，那么 union 时会把 A1、B1、A2、B2 分成一堆

因此，可以做出如下分析：（情侣总对数记为 m） 
 1. 如果所有情侣的座位正确，那么 m 对情侣，并查集的个数也会有 m 个，因此两者相减为 0，不需要交换
 2. 如果有 2 对情侣座位不正确，那么 m 对情侣，并查集个数就会有 m - 1 个 ，表示有 2 对情侣混淆成了一堆，两者相减为 1，需做一次交换
 3. 如果有 3 对不正确，并查集个数就为 m - 2 个， 表示有 3 对情侣混淆成一堆，两者相减为 2，需做两次交换
 4. 如果 4 对情侣混淆成了 2 堆，那么每堆内部就是 2 对情侣被混淆，，每堆需做一次交换，所以 4 对情侣被混淆成了 2 堆就需要交换 2 次。 
    而 4 对情侣混淆成了 2 堆在并查集上体现出来就是 m - 2 个， 表示有两组没分对成功，用情侣总数减一下也就得到了交换次数为 2。 
 
以此类推，说明有多少对情侣混淆了，那么情侣总对数 - 并查集个数得到的结果就是，混淆情侣对数 - 1，表示需要交换的次数 
*/


