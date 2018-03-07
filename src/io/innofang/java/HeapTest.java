package io.innofang.java;

import io.innofang.java.heap.Heap;
import io.innofang.java.utils.TestHelper;
import io.innofang.java.utils.comparator.impl.IntegerComparison;

/**
 * Created by Inno Fang on 2017/4/14.
 * test for heap
 */
public final class HeapTest {
    private HeapTest() {}

    public static void main(String[] args) {
        final int capacity = 50;
        int[] arr = TestHelper.generateRandomIntegerArray(capacity, 1, 200);
        Heap<Integer> maxHeap = new Heap<>(capacity, new IntegerComparison());
        for (int i = 0; i < arr.length; i++) {
            maxHeap.insert(arr[i]);
        }
        for (int i = arr.length - 1; i >= 0; i--) {
            arr[i] = maxHeap.extractMax();
        }
        TestHelper.printArray(arr);
    }
}
