package io.innofang.java;

import io.innofang.java.tree.BST;
import io.innofang.java.utils.FileOpsUtil;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Random;

/**
 * Created by Inno Fang on 2017/5/2.
 * <p>
 * Test for Binary Search Tree
 */
public final class BSTTest {
    private BSTTest() {
    }

    public static void main(String[] args) {
        Random random = new Random();
        BST<Integer, Integer> bst = new BST<>();
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

        System.out.println('\n');
        System.out.println("Test for search : calculate how many \'unite\' in the communist");
        /* Test Search */
        String pathname = "F:\\IDEA\\Algorithms\\src\\io\\innofang\\communist.txt";
        List<String> words = new ArrayList<>();
        if (FileOpsUtil.readFile(pathname, words)) {
            System.out.println("There are totally " + words.size() + " words\n");
            long startTime = System.currentTimeMillis();
            BST<String, Integer> bst1 = new BST<>();
            Iterator iterator = words.iterator();
            while (iterator.hasNext()) {
                String word = (String) iterator.next();
                Integer res = bst1.search(word);
                if (res == null) {
                    bst1.insert(word, 1);
                } else {
                    bst1.insert(word, ++res);
                }
            }
            System.out.println("\'unite\' : " + bst1.search("unite"));
            long entTime = System.currentTimeMillis();
            System.out.printf("BST, time: %f s.", (double)((entTime - startTime * 1.0) / 1000));
            System.out.println();
        }

    }
}
