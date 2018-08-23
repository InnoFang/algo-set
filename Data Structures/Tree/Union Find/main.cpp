#include <iostream>

class UnionFind {
public:
    UnionFind(int count) {
        this->count = count;
        this->rank   = new int[count];
        this->parent = new int[count];
        for (int i = 0; i < count; ++i) {
            parent[i] = i;  /* firstly, make the ith node point to itself. */
            rank[i]   = 1;  /* the number of layers of the ith node is 1 as default */
        }
    }

    ~UnionFind() {
        delete [] rank;
        delete [] parent;
    }

    int find(int p) {
        while (p != parent[p]) {
            parent[p] = parent[parent[p]];
            p = parent[p];
        }
        return p;
    }

    void union_(int p, int q) {
        int rootP = find(p);
        int rootQ = find(q);

        if (rootP == rootQ) return;

        if (rank[rootP] < rank[rootQ]) parent[rootP] = rootQ;
        else if (rank[rootP] > rank[rankQ]) parent[rootQ] = rootP;
        else {
            parent[rootP] = rootQ;
            rank[rootP] += 1;
        }
    }

    bool isConnected(int p, int q) {
        return find(p) == find(q);
    }
private:
    int * rank;     /* rank[i] represents the number of layers of the tree 
                       represented by the set whith i as the root. */
    int * parent;   /* parent[i] represents the parent node pointed by the ith element */
    int count;      /* total number of elements */
}