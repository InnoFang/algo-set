import utils.SortTestHelper;

import java.util.Random;

/**
 * Created by Inno Fang on 2017/3/28.
 */
public final class Test {

    public static void main(String[] args) {
       /* int[] arr = SortTestHelper.generateRandomArray(100, 50, 90);
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();*/
      /*  Random random = new Random();
        System.out.println(random.nextInt(100));
        System.out.println(random.nextInt(100));*/
      int[] arr = SortTestHelper.generateNearlyOrderedArray(50, 2);
     /*   for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }*/
     int[] arr1 = SortTestHelper.copyIntArray(arr);
     SortTestHelper.printArray(arr);
     SortTestHelper.printArray(arr1);

    }

}
