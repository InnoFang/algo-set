package io.innofang.java.sort.impl;

import io.innofang.java.sort.ISort;
import io.innofang.java.utils.SwapUtil;
import io.innofang.java.utils.comparator.Comparator;

import java.util.Random;

/**
 * Created by Inno Fang on 2017/3/31.
 * <p>
 * Quick Sort
 */
public class QuickSort extends ISort {

    private Random random = new Random();

    public QuickSort(Comparator comparable) {
        super(comparable);
    }

    @Override
    public <T> void sort(T[] arr) {
        quickSort(arr, 0, arr.length - 1);
    }

    private <T> void quickSort(T[] arr, int rangeLeft, int rangeRight) {
        if (rangeLeft > rangeRight)
            return;
        int p = partition(arr, rangeLeft, rangeRight);
        quickSort(arr, rangeLeft, p - 1);
        quickSort(arr, p + 1, rangeRight);
    }

    @SuppressWarnings("unchecked")
    private <T> int partition(T[] arr, int rangeLeft, int rangeRight) {
        /* Optimization, exchange a with a random location */
        SwapUtil.swap(arr, rangeLeft, random.nextInt(rangeRight - rangeLeft + 1) + rangeLeft);
        int l = rangeLeft;
        int r = rangeRight;
        T temp = arr[rangeLeft];
        while (l != r) {
            while (comparator.moreThanOrEqualTo(arr[r], temp) && r > l)
                r--;
            while (comparator.lessThanOrEqualTo(arr[l], temp) && r > l)
                l++;
            if (r > l)
                SwapUtil.swap(arr, l, r);
        }
        SwapUtil.swap(arr, l, rangeLeft);
        return l;
    }
}
