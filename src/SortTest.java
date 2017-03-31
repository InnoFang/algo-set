import sort.impl.BubbleSort;
import sort.impl.InsertionSort;
import sort.impl.MergeSort;
import sort.impl.SelectionSort;
import utils.SortTestHelper;
import utils.compare.Comparable;
import utils.compare.impl.IntegerComparison;

import java.util.Arrays;

/**
 * Created by Inno Fang on 2017/3/27.
 *
 */
public final class SortTest {

    private SortTest() {
    }

    public static void main(String[] args) {
        final int n = 50000;
        final int rangeLeft = 10;
        final int rangeRight = 1000;
        Comparable comparison = new IntegerComparison();

        int[] arr = SortTestHelper.generateRandomIntegerArray(n, rangeLeft, rangeRight);
        int[] arr1 = Arrays.copyOf(arr, arr.length);
        int[] arr2 = Arrays.copyOf(arr, arr.length);
        int[] arr3 = Arrays.copyOf(arr, arr.length);

        System.out.println("Test for Random Array, size = " + n + ", random range [0, " + n + "]");
//        SortTestHelper.testSort(new BubbleSort(comparison), arr);
        SortTestHelper.testSort(new SelectionSort(comparison), arr1);
        SortTestHelper.testSort(new InsertionSort(comparison), arr2);
        SortTestHelper.testSort(new MergeSort(comparison), arr3);

        System.out.println();

        final int swapTimes = 10;
        arr = SortTestHelper.generateNearlyOrderedIntegerArray(n, swapTimes);
        arr1 = Arrays.copyOf(arr, arr.length);
        arr2 = Arrays.copyOf(arr, arr.length);
        arr3 = Arrays.copyOf(arr, arr.length);

        System.out.println("Test for Nearly Ordered Array, size = " + n + ", range [0, " + n + "]");
//        SortTestHelper.testSort(new BubbleSort(comparison), arr);
        SortTestHelper.testSort(new SelectionSort(comparison), arr1);
        SortTestHelper.testSort(new InsertionSort(comparison), arr2);
        SortTestHelper.testSort(new MergeSort(comparison), arr3);

    }
}
