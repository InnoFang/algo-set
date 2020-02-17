package UnionFind

type unionFind struct {
	Size         int
	parent, rank []int
}

func Create(size int) *unionFind {
	uf := unionFind{
		Size:   size,
		parent: make([]int, size),
		rank:   make([]int, size),
	}
	for i := 0; i < size; i++ {
		uf.parent[i] = i
		uf.rank[i] = 1
	}
	return &uf
}

func (uf unionFind) Find(p int) int {
	for p != uf.parent[p] {
		uf.parent[p] = uf.parent[uf.parent[p]]
		p = uf.parent[p]
	}
	return p
}

func (uf unionFind) Union(p, q int) {
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

func (uf unionFind) IsConnected(p, q int) bool {
	return uf.Find(p) == uf.Find(q)
}
