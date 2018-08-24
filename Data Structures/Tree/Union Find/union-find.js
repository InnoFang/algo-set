class UnionFind {

    constructor(count) {
        this.count  = count;
        this.parent = new Array(count);
        this.rank   = new Array(count);
        
        for (let i = 0; i < count; ++i) {
            this.parent[i] = i;
            this.rank[i]   = 1;
        }
    }

    find(p) {
        while (p != this.parent[p]) {
            this.parent[p] = this.parent[this.parent[p]];
            p = this.parent[p];
        }
        return p;
    }

    union(p, q) {
        let rootP = this.find(p),
            rootQ = this.find(q);
        
        if (rootP == rootQ) return;

        let rankP = this.rank[p],
            rankQ = this.rank[q];
        
        if (rankP < rankQ) this.parent[rootP] = rootQ;
        else if (rankP > rankQ) this.parent[rootQ] = rootP;
        else {
            this.parent[rootP] = rootQ;
            this.rank[rootP] += 1;
        }
    }

    isConnected(p, q) {
        return this.find(p) == this.find(q);
    }
} 