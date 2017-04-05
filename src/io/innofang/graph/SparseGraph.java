package io.innofang.graph;

import java.util.Vector;

/**
 * Created by Inno Fang on 2017/4/5.
 *
 * 稀疏图 - 邻接表
 */
public class SparseGraph<T> {

    private int vertexes, edges;
    private boolean directed;
    private Vector<Vector<T>> graph;

    public SparseGraph(int vertexes, boolean directed) {
        this.vertexes = vertexes;
        this.directed = directed;
        this.edges = 0;
        graph  = new Vector<>();
        for (int i = 0; i < vertexes; i++) {
            graph.add(new Vector<T>());
        }
    }

    public void addEdge(int v1, int v2, T element) {
        if (!(v1 >= 0 && v1 < vertexes)) return;
        if (!(v2 >= 0 && v2 < vertexes)) return;

        graph.get(v1).add(v2, element);
        if (v1 != v2 && !directed)
            graph.get(v2).add(v1, element);

        edges++;
    }

    @SuppressWarnings("unchecked")
    public void addEdge(int v1, int v2) {
        if (!(v1 >= 0 && v1 < vertexes)) return;
        if (!(v2 >= 0 && v2 < vertexes)) return;

        graph.get(v1).add((T)Integer.valueOf(v2));
        if (v1 != v2 && !directed)
            graph.get(v2).add((T)Integer.valueOf(v1));

        edges++;
    }

    public boolean hasEdge(int v1, int v2, T element) {
        if (!(v1 >= 0 && v1 < vertexes)) return false;
        if (!(v2 >= 0 && v2 < vertexes)) return false;

        for (int i = 0; i < graph.get(v1).size(); i++) {
            if (graph.get(v1).get(v2).equals(element))
                return true;
        }
        return false;
    }

    public void show() {
        for (int i = 0; i < graph.size(); i++) {
            System.out.println("vertex " + i + ":\t");
            for (int j = 0; j < graph.get(i).size(); j++) {
                System.out.println(graph.get(i).get(j) + "\t");
            }
            System.out.println();
        }
    }

    public Iterator iterator(int vertex) {
        return new SparseIterator(vertex);
    }

    public int getvertexes() {
        return vertexes;
    }

    public int getedges() {
        return edges;
    }

    public boolean isDirected() {
        return directed;
    }

    private class SparseIterator implements Iterator<T> {

        private int index;
        private int vertex;
        public SparseIterator(int vertex) {
            index = 0;
            this.vertex = vertex;
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
