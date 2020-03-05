/**
 * Created by Inno Fang on 2018/3/26.
 */

/**
 * 113 / 113 test cases passed.
 * Status: Accepted
 * Runtime: 11 ms
 */
class Solution {
    int[] list;
    int[] rank;
    int group;

    public int findCircleNum(int[][] M) {
        group = M.length;
        list = new int[group];
        rank = new int[group];
        for (int i = 0; i < group; i++) {
            list[i] = i;
            rank[i] = 1;
        }

        for (int i = 0; i < M.length; i++) {
            for (int j = i + 1; j < M.length; j++) {
                if (M[i][j] == 1) {
                    union(i, j);
                }
            }
        }
        return group;
    }

    private void union(int x, int y) {
        int p = find(x);
        int q = find(y);
        if (p == q) return;
        if (rank[p] < rank[q]) list[p] = q;
        else {
            list[q] = p;
            if (rank[p] == rank[q]) rank[p]++;
        }
        group--;
    }

    private int find(int x) {
        while (x != list[x]) {
            list[x] = list[list[x]];
            x = list[x];
        }
        return x;
    }

    public static void main(String[] args) {
        int result = new Solution().findCircleNum(new int[][]{
                {1, 0, 0, 1}, {0, 1, 1, 0}, {0, 1, 1, 1}, {1, 0, 1, 1}
        });
        System.out.println(result);
    }
}