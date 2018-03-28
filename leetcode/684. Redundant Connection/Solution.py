class Solution:
    def __init__(self):
        self.ranks = []
        self.store = []

    def findRedundantConnection(self, edges):
        """
        :type edges: List[List[int]]
        :rtype: List[int]
        --------------------
        39 / 39 test cases passed.
        Status: Accepted
        Runtime: 44 ms
        """
        self.store = [i for i in range(len(edges) * 2)]
        self.ranks = [1] * (len(edges) * 2)
        for e in edges:
            if not self.__union(e[0], e[1]):
                return e
        return [0, 0]

    def __find(self, p):
        while p != self.store[p]:
            self.store[p] = self.store[self.store[p]]
            p = self.store[p]
        return p

    def __union(self, p, q):
        rootP = self.__find(p)
        rootQ = self.__find(q)
        if rootP == rootQ:
            return False
        if self.ranks[rootP] < self.ranks[rootQ]:
            self.store[rootP] = rootQ
        else:
            self.store[rootQ] = rootP
            if self.ranks[rootQ] == self.ranks[rootP]:
                self.ranks[rootP] += 1
        return True


if __name__ == '__main__':
    # print(Solution().findRedundantConnection([[1,2],[1,3],[2,3]]))
    print(Solution().findRedundantConnection([[16,25],[7,9],[3,24],[10,20],[15,24],[2,8],[19,21],[2,15],[13,20],[5,21],[7,11],[6,23],[7,16],[1,8],[17,20],[4,19],[11,22],[5,11],[1,16],[14,20],[1,4],[22,23],[12,20],[15,18],[12,16]]))