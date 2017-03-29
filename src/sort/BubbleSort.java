package sort;

import utils.SwapUtil;

/**
 * Created by Inno Fang on 2017/3/28.
 */
public class BubbleSort implements ISort<Integer> {

    @Override
    public void sort(Integer[] arr) {
        for (int i = arr.length - 2; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                if (arr[j] > arr[j + 1]) {
                    SwapUtil.swap(arr, j, j + 1);
                }
            }
        }
    }
}
