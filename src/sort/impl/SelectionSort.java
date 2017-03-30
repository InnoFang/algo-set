package sort.impl;

import sort.ISort;
import utils.SwapUtil;
import utils.compare.Comparable;

/**
 * Created by Inno Fang on 2017/3/29.
 *
 */

public class SelectionSort extends ISort {

    public SelectionSort(Comparable comparable) {
        super(comparable);
    }

    @SuppressWarnings("unchecked")
    @Override
    public <T> void sort(T[] arr) {

        for (int i = 0; i < arr.length; i++) {
            int index = i;
            for (int j = i + 1; j < arr.length; j++) {
                if (comparable.moreThan(arr[index], arr[j])) {
                    index = j;
                }
            }
            if (i != index) {
                SwapUtil.swap(arr, index, i);
            }
        }
    }
}
