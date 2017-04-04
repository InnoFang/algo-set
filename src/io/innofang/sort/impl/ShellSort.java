package io.innofang.sort.impl;

import io.innofang.sort.ISort;
import io.innofang.utils.comparator.Comparator;

/**
 * Created by Inno Fang on 2017/3/31.
 *
 */
public class ShellSort extends ISort {
    public ShellSort(Comparator comparable) {
        super(comparable);
    }

    @Override
    @SuppressWarnings("unchecked")
    public <T> void sort(T[] arr) {
        int len = arr.length;
        int div = 1;
        while (div < len / 3) div = div * 3 + 1;
        while (div >= 1) {
            for (int i = div; i < len; i++) {
                T temp = arr[i];
                int j;
                for (j = i; j >= div && comparator.lessThan(temp, arr[j - div]); j -= div) {
                    arr[j] = arr[j - div];
                }
                arr[j] = temp;
            }
            div /= 3;
        }
    }
}
