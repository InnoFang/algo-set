package io.innofang.java;

import io.innofang.java.sort.impl.*;
import io.innofang.sort.impl.*;
import io.innofang.java.utils.comparator.Comparator;
import io.innofang.java.utils.comparator.impl.IntegerComparison;

import java.util.Arrays;

import static io.innofang.java.utils.TestHelper.*;

/**
 * Created by Inno Fang on 2017/3/27.
 *
 */
public final class SortTest {

    private SortTest() {}

    public static void main(String[] args) {
        final int n = 100000;
        final int rangeLeft = 10;
        final int rangeRight = 1000;
        Comparator comparison = new IntegerComparison();

        int[] arr = generateRandomIntegerArray(n, rangeLeft, rangeRight);
        int[] arr1 = Arrays.copyOf(arr, arr.length);
        int[] arr2 = Arrays.copyOf(arr, arr.length);
        int[] arr3 = Arrays.copyOf(arr, arr.length);
        int[] arr4 = Arrays.copyOf(arr, arr.length);
        int[] arr5 = Arrays.copyOf(arr, arr.length);

        System.out.println("Test for Random Array, size = " + n + ", random range [0, " + n + "]");
        testSort(new BubbleSort(comparison), arr);
        testSort(new SelectionSort(comparison), arr1);
        testSort(new InsertionSort(comparison), arr2);
        testSort(new ShellSort(comparison), arr3);
        testSort(new MergeSort(comparison), arr4);
        testSort(new QuickSort(comparison), arr5);

        System.out.println();

        final int swapTimes = 10;
        arr = generateNearlyOrderedIntegerArray(n, swapTimes);
        arr1 = Arrays.copyOf(arr, arr.length);
        arr2 = Arrays.copyOf(arr, arr.length);
        arr3 = Arrays.copyOf(arr, arr.length);
        arr4 = Arrays.copyOf(arr, arr.length);
        arr5 = Arrays.copyOf(arr, arr.length);

        System.out.println("Test for Nearly Ordered Array, size = " + n + ", range [0, " + n + "]");
        testSort(new BubbleSort(comparison), arr);
        testSort(new SelectionSort(comparison), arr1);
        testSort(new InsertionSort(comparison), arr2);
        testSort(new ShellSort(comparison), arr3);
        testSort(new MergeSort(comparison), arr4);
        testSort(new QuickSort(comparison), arr5);

    }
}
