import sort.BubbleSort;
import utils.SortTestHelper;
import utils.compare.IntegerComparison;

import java.util.Arrays;
import java.util.Collections;
import java.util.Random;

/**
 * Created by Inno Fang on 2017/3/28.
 */
public final class SortTest {

    private SortTest(){}

    public static void main(String[] args) {
        int[] arr = SortTestHelper.generateRandomIntegerArray(10000, 10, 1000);

        SortTestHelper.testSort("Bubble Sort", new BubbleSort(new IntegerComparison()), arr);

        System.out.println(SortTestHelper.isAscending(arr));
    }

}
