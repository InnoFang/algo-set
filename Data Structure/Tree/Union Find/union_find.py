class UnionFind:
    def __init__(self, count):
        self.count  = count
        self.parent = [i for i in range(count)]
        self.rank   = [1 for i in range(count)]

    def find(self, p):
        if p != self.parent[p]:
            self.parent[p] = self.find(self.parent[p])
        return self.parent[p]

    def union(self, p, q):
        root_p, root_q = self.find(p), self.find(q)

        if root_p == root_q:
            return 
        
        rank_p, rank_q = self.rank[p], self.rank[q]
        if rank_p < rank_q:
            self.parent[root_p] = root_q
        elif rank_p > rank_q:
            self.parent[root_q] = root_p
        else:
            self.parent[root_p] = root_q
            self.rank[root_p] += 1
        
    def is_connected(self, p, q):
        return self.find(p) == self.find(q) 
    