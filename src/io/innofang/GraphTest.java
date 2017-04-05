package io.innofang;

import io.innofang.graph.DenseGraph;
import io.innofang.graph.Iterator;
import io.innofang.graph.SparseGraph;

import java.util.Random;

/**
 * Created by Inno Fang on 2017/4/5.
 * <p>
 * Graph Test
 */
public final class GraphTest {

    private GraphTest() {
    }

    public static void main(String[] args) {
        final int vertexes = 20;
        final int edges = 100;
        Random random = new Random();
        SparseGraph<Integer> sparseGraph = new SparseGraph<>(vertexes, false);
        for (int i = 0; i < edges; i++) {
            int v1 = random.nextInt(vertexes);
            int v2 = random.nextInt(vertexes);
            sparseGraph.addEdge(v1, v2);
        }
        for (int i = 0; i < vertexes; i++) {
            itr(sparseGraph.iterator(i));
        }

        System.out.println("+---------------Divider---------------+");

        DenseGraph<Integer> denseGraph = new DenseGraph<>(vertexes, false);
        for (int i = 0; i < edges; i++) {
            int v1 = random.nextInt(vertexes);
            int v2 = random.nextInt(vertexes);
            denseGraph.addEdge(v1, v2, v2);
        }

        for (int i = 0; i < vertexes; i++) {
            itr(denseGraph.iterator(i));
        }
    }

    private static void itr(Iterator iterator) {
        while (iterator.hasNext())
            System.out.print(iterator.next() + "\t");
        System.out.println();
    }
}
