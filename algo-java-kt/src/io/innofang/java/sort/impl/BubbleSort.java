package io.innofang.java.sort.impl;

import io.innofang.java.sort.ISort;
import io.innofang.java.utils.SwapUtil;
import io.innofang.java.utils.comparator.Comparator;

/**
 * Created by Inno Fang on 2017/3/27.
 */

public class BubbleSort extends ISort {

    public BubbleSort(Comparator comparable) {
        super(comparable);
    }

    @SuppressWarnings("unchecked")
    @Override
    public <T> void sort(T[] arr) {
        for (int i = arr.length - 2; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                if (comparator.moreThan(arr[j], arr[j + 1])) {
                    SwapUtil.swap(arr, j, j + 1);
                }
            }
        }
    }
}
