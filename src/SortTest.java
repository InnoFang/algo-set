import utils.SortTestHelper;

import java.util.Arrays;
import java.util.Random;

/**
 * Created by Inno Fang on 2017/3/28.
 */
public final class SortTest {

    public static void main(String[] args) {
      Integer[] arr = SortTestHelper.generateNearlyOrderedIntegerArray(50, 2);

     Integer[] arr1 = Arrays.copyOf(arr, arr.length);
     SortTestHelper.printArray(arr);
     SortTestHelper.printArray(arr1);

    }

}
