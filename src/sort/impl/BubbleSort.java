package sort.impl;

import sort.ISort;
import utils.SwapUtil;
import utils.compare.Comparable;

/**
 * Created by Inno Fang on 2017/3/27.
 *
 */

public class BubbleSort extends ISort {

    public BubbleSort(Comparable comparable) {
        super(comparable);
    }

    @SuppressWarnings("unchecked")
    @Override
    public <T> void sort(T[] arr) {
        for (int i = arr.length - 2; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                if (comparable.moreThan(arr[j], arr[j + 1])) {
                    SwapUtil.swap(arr, j, j + 1);
                }
            }
        }
    }
}
