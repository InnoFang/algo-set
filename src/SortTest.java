import sort.impl.BubbleSort;
import utils.SortTestHelper;
import utils.compare.impl.IntegerComparison;

/**
 * Created by Inno Fang on 2017/3/27.
 *
 */
public final class SortTest {

    private SortTest(){}

    public static void main(String[] args) {
        int[] arr = SortTestHelper.generateRandomIntegerArray(10000, 10, 1000);
        SortTestHelper.printArray(arr);
        SortTestHelper.testSort(new BubbleSort(new IntegerComparison()), arr);
        SortTestHelper.printArray(arr);

        System.out.println(SortTestHelper.isAscending(arr));
    }

}
