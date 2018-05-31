package io.innofang.java.graph;

import java.util.Vector;

/**
 * Created by Inno Fang on 2017/4/5.
 * <p>
 * 稠密图 - 邻接矩阵
 */
public class DenseGraph<T> {
    private int vertexes, edges;
    private boolean directed; // 是否有向
    private Vector<Vector<T>> graph;

    public DenseGraph(int vertexes, boolean directed) {
        this.vertexes = vertexes;
        this.directed = directed;
        this.edges = 0;
        graph = new Vector<>();
        for (int i = 0; i < vertexes; i++) {
            graph.add(new Vector<T>(vertexes));
            for (int j = 0; j < vertexes; j++) {
                graph.get(i).add(null);
            }
        }
    }

    public void addEdge(int v1, int v2, T element) {
        if (!(v1 >= 0 && v1 < vertexes)) return;
        if (!(v2 >= 0 && v2 < vertexes)) return;

        if (hasEdge(v1, v2))
            return;

        graph.get(v1).set(v2, element);
        if (!directed)
            graph.get(v2).set(v1, element);

        edges++;
    }

    @SuppressWarnings("unchecked")
    public void addEdge(int v1, int v2) {
        if (!(v1 >= 0 && v1 < vertexes)) return;
        if (!(v2 >= 0 && v2 < vertexes)) return;

        if (hasEdge(v1, v2))
            return;

        graph.get(v1).set(v2, (T) Boolean.TRUE);
        if (!directed)
            graph.get(v2).set(v1, (T) Boolean.TRUE);

        edges++;
    }

    public boolean hasEdge(int v1, int v2) {
        if (!(v1 >= 0 && v1 < vertexes)) return false;
        if (!(v2 >= 0 && v2 < vertexes)) return false;

        if (null != graph.get(v1).get(v2))
            return true;
        return false;
    }

    public Iterator iterator(int vertex) {
        return new DenseIterator(vertex);
    }

    public int getVertexes() {
        return vertexes;
    }

    public int getEdges() {
        return edges;
    }

    public boolean isDirected() {
        return directed;
    }

    private class DenseIterator implements Iterator<T>{

        private int index, vertex;

        public DenseIterator(int vertex) {
            this.vertex = vertex;
            this.index = 0;
        }

        @Override
        public boolean hasNext() {
            return (index < graph.get(vertex).size() - 1)
                    && (graph.get(vertex).get(index) != null);
        }

        @Override
        public T next() {
            return graph.get(vertex).get(index++);
        }
    }
}
