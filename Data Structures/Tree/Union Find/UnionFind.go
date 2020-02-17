package UnionFind

type UnionFind struct {
	Size         int
	parent, rank []int
}

func createUnionFind(size int) *UnionFind {
	uf := UnionFind{
		Size:   size,
		parent: make([]int, size),
		rank:   make([]int, size),
	}
	for i := 0; i < size; i++ {
		uf.parent[i] = i
		uf.rank[i] = i
	}
	return &uf
}

func (uf UnionFind) Find(p int) int {
	for p != uf.parent[p] {
		uf.parent[p] = uf.parent[uf.parent[p]]
		p = uf.parent[p]
	}
	return p
}

func (uf UnionFind) Union(p, q int) {
	rootP, rootQ := uf.Find(p), uf.Find(q)
	if rootP == rootQ {
		return
	}

	switch {
	case uf.rank[rootP] < uf.rank[rootQ]:
		uf.parent[rootP] = rootQ
	case uf.rank[rootP] > uf.rank[rootQ]:
		uf.parent[rootQ] = rootP
	default:
		uf.parent[rootP] = rootQ
		uf.rank[rootP] += 1
	}
}

func (uf UnionFind) IsConnected(p, q int) bool {
	return uf.Find(p) == uf.Find(q)
}
