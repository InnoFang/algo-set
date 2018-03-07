package io.innofang.java.sort.impl;

import io.innofang.java.sort.ISort;
import io.innofang.java.utils.SwapUtil;
import io.innofang.java.utils.comparator.Comparator;

/**
 * Created by Inno Fang on 2017/3/29.
 */

public class SelectionSort extends ISort {

    public SelectionSort(Comparator comparable) {
        super(comparable);
    }

    @SuppressWarnings("unchecked")
    @Override
    public <T> void sort(T[] arr) {

        for (int i = 0; i < arr.length; i++) {
            int index = i;
            for (int j = i + 1; j < arr.length; j++) {
                if (comparator.moreThan(arr[index], arr[j])) {
                    index = j;
                }
            }
            SwapUtil.swap(arr, index, i);
        }
    }
}
