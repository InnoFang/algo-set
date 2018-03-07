package io.innofang.java.sort.impl;

import io.innofang.java.sort.ISort;
import io.innofang.java.utils.comparator.Comparator;

/**
 * Created by Inno Fang on 2017/3/31.
 *
 */
public class MergeSort extends ISort {
    public MergeSort(Comparator comparable) {
        super(comparable);
    }

    @Override
    public <T> void sort(T[] arr) {
        mergeSort(arr, 0, arr.length - 1);
    }

    /* Sort the array from [l...r] using merge io.innofang.sort */
    @SuppressWarnings("unchecked")
    private <T> void mergeSort(T[] arr, int l, int r) {
        if (l >= r)
            return;
//        int mid = (l + r) / 2;
        int mid = l + (r - l) / 2; // prevent overflows.
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        // optimization, merge arr when arr is out of order
        if (comparator.moreThan(arr[mid], arr[mid + 1]))
            merge(arr, l, mid, r);
    }

    /* Merge arr[l...mid] and arr[mid+1...r] */
    @SuppressWarnings("unchecked")
    private <T> void merge(T[] arr, int l, int mid, int r) {
        T[] aux = (T[]) new Object[r - l + 1]; // Auxiliary Space
        /* Copy the array arr from l to (r-l+1) to array aux */
        System.arraycopy(arr, l, aux, 0, r - l + 1);
        int i = l, j = mid + 1;
        for (int k = l; k <= r; k++) {
            if (i > mid) {
                arr[k] = aux[j - l];
                j++;
            } else if (j > r) {
                arr[k] = aux[i - l];
                i++;
            } else if (comparator.moreThan(aux[i - l], aux[j - l])) {
                arr[k] = aux[j - l];
                j++;
            } else {
                arr[k] = aux[i - l];
                i++;
            }
        }
    }
}
