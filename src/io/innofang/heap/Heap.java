package io.innofang.heap;

import io.innofang.utils.comparator.Comparator;

import java.util.*;

/**
 * Created by Inno Fang on 2017/4/14.
 * Heap
 */
public class Heap<T> {

    private List<T> data;
    private int count, capacity;
    private Comparator<T> comparator;

    public Heap(int capacity, Comparator comparator) {
        this.capacity = capacity;
        this.comparator = comparator;
        data = new ArrayList<>();
        data.add((T) new Object());
    }

    private void shiftUp(int k) {
        while (k > 1 && comparator.lessThan(data.get(k / 2), data.get(k))) {
            Collections.swap(data, k / 2, k);
            k /= 2;
        }
    }

    private void shiftDown(int k) {
        while (2 * k <= count) {
            /* the index of left child */
            int j = 2 * k;
            /* judge whether the right child is exists, if true,
             * than judge which is the bigger one between left and right
             */
            if (j + 1 <= count && comparator.moreThan(data.get(j + 1), data.get(j)))
                j++;
            /* judge who is bigger between parent and child, if child is bigger, swap it or not */
            if (comparator.moreThanOrEqualTo(data.get(k), data.get(j)))
                break;
            Collections.swap(data, k, j);
            k = j;
        }
    }

    public int size() {
        return count;
    }

    public boolean isEmpty() {
        return count == 0;
    }

    public void insert(T t) {
        if (count + 1 > capacity) {
            throw new ArrayIndexOutOfBoundsException("out of capacity : " + capacity);
        }
        data.add(t);
        shiftUp(count + 1);
        count++;
    }

    public T extractMax() {
        if (count < 0) {
            throw new IndexOutOfBoundsException("The count must bigger than 0 " + count);
        }
        T ret = data.get(1);
        Collections.swap(data, 1, count);
        count--;
        shiftDown(1);
        return ret;
    }

    public T getMax() {
        if (count < 0) {
            throw new IndexOutOfBoundsException("The count must bigger than 0 " + count);
        }
        return data.get(1);
    }
}
