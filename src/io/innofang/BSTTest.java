package io.innofang;

import io.innofang.binarytree.BST;
import io.innofang.utils.comparator.impl.IntegerComparison;

import java.util.Random;

/**
 * Created by Inno Fang on 2017/5/2.
 */
public final class BSTTest {
    private BSTTest() {
    }

    public static void main(String[] args) {
        Random random = new Random();
        IntegerComparison integerComparison = new IntegerComparison();
        BST<Integer, Integer> bst = new BST<>(integerComparison);
        int n = 10;
        for (int i = 0; i < n; i++) {
            int key = random.nextInt(1000);
            int value = key;
            System.out.print(key + " ");
            bst.insert(key, value);
        }
        System.out.println();

        /* Test Size */
        System.out.println("Size : " + bst.size());
        System.out.println();

        /* Test PreOrder */
        System.out.println("PreOrder : ");
        bst.preOrder();
        System.out.println("\n");

        /* Test InOrder */
        System.out.println("InOrder : ");
        bst.inOrder();
        System.out.println("\n");

        /* Test PostOrder */
        System.out.println("PostOrder : ");
        bst.postOrder();
        System.out.println("\n");

        /* Test LevelOrder */
        System.out.println("LevelOrder : ");
        bst.levelOrder();
        System.out.println("\n");

        /* Test RemoveMax */
        while (!bst.isEmpty()) {
            System.out.println("Max : " + bst.maximum());
            bst.removeMax();
            System.out.println("After removeMax, size = " + bst.size());
        }
    }
}
