class UnionFind:
    def __init__(self, n):
        self.parent = list(range(n))
        self.rank   = [1] * n

    def find(self, p):
        if p != self.parent[p]:
            self.parent[p] = self.find(self.parent[p])
        return self.parent[p]

    def union(self, p, q):
        root_p, root_q = self.find(p), self.find(q)

        if root_p == root_q:
            return False
        
        rank_p, rank_q = self.rank[p], self.rank[q]
        if rank_p < rank_q:
            self.parent[root_p] = root_q
        elif rank_p > rank_q:
            self.parent[root_q] = root_p
        else:
            self.parent[root_p] = root_q
            self.rank[root_p] += 1
        
        return True
        
    def is_connected(self, p, q):
        return self.find(p) == self.find(q) 
    