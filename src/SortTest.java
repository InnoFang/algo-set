import com.sun.scenario.effect.impl.sw.sse.SSEBlend_SRC_OUTPeer;
import sort.impl.BubbleSort;
import sort.impl.SelectionSort;
import utils.SortTestHelper;
import utils.compare.impl.IntegerComparison;

import java.util.Arrays;
import java.util.Random;

/**
 * Created by Inno Fang on 2017/3/27.
 *
 */
public final class SortTest {

    private SortTest(){}

    public static void main(String[] args) {
        final int n = 100000;
        int[] arr = SortTestHelper.generateRandomIntegerArray(n, 10, 1000);
        int[] arr1 = Arrays.copyOf(arr, arr.length);
        System.out.println("Test for Random Array, size = " + n + ", random range [0, " + n +"]");
        SortTestHelper.testSort(new BubbleSort(new IntegerComparison()), arr);
        SortTestHelper.testSort(new SelectionSort(new IntegerComparison()), arr1);
    }
}
