/**
 * Created by Inno Fang on 2018/3/28.
 */

/**
 * 39 / 39 test cases passed.
 * Status: Accepted
 * Runtime: 5 ms
 */
class Solution {
    private int[] store;
    private int[] ranks;

    private int find(int p) {
        while (p != store[p]) {
            p = store[p] = store[store[p]];
        }
        return p;
    }

    private boolean union(int p, int q) {
        int rootP = find(p);
        int rootQ = find(q);
        if (rootP == rootQ) return false;
        if (ranks[rootP] < ranks[rootQ]) store[rootP] = rootQ;
        else {
            store[rootQ] = rootP;
            if (ranks[rootQ] == ranks[rootP]) ranks[rootP]++;
        }
        return true;
    }

    public int[] findRedundantConnection(int[][] edges) {
        int num = edges.length * 2;
        store = new int[num];
        ranks = new int[num];
        for (int i = 0; i < num; i++) {
            store[i] = i;
            ranks[i] = 1;
        }
        for (int[] edge : edges) {
            if (!union(edge[0], edge[1])) {
                return edge;
            }
        }
        return new int[2];
    }
}