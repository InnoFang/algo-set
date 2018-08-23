public class UnionFind {

    private int   count;
    private int[] parent;
    private int[] rank;

    public UnionFind(int count) {
        this.count  = count;
        this.parent = new int[count];
        this.rank   = new int[count];
        
        for (int i = 0; i < count; ++i) {
            rank[i]   = 1;
            parent[i] = i;
        }
    }

    public int find(int p) {
        while (p != parent[p]) {
            parent[p] = parent[parent[p]];
            p = parent[p];
        }
        return p;
    }

    public void union(int p, int q) {
        int rootP = find(p);
        int rootQ = find(q);

        if (rootP == rootQ) return;

        if (rank[rootP] < rank[rootQ]) parent[rootP] = rootQ;
        else if (rank[rootP] > rank[rootQ]) parent[rootQ] = rootP;
        else {
            parent[rootP] = rootQ;
            rank[rootP] += 1;
        }
    }

    public boolean isConnected(int p, int q) {
        return find(p) == find(q);
    } 
}