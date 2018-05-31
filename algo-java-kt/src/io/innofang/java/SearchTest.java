package io.innofang.java;

import io.innofang.java.search.imple.BinarySearch;
import io.innofang.java.search.ISearch;
import io.innofang.java.utils.comparator.impl.IntegerComparison;

/**
 * Created by Inno Fang on 2017/4/2.
 *
 * Search Test
 */
public final class SearchTest {

    private SearchTest() {}

    public static void main(String[] args) {
        BinarySearch binarySearch = new BinarySearch(new IntegerComparison());
        int[] arr = {1, 1, 1, 2, 2, 2, 2, 2, 4, 4, 5, 5, 5, 6, 6, 6, 7};
        int target = 2;
        ISearch.Indices indices = binarySearch.search(arr, target);
        if (indices.floor == indices.ceil)
            System.out.println("Find 1 value, the index is " + indices.floor);
        else if (indices.floor == -1 || indices.ceil >= arr.length) {
            System.out.println("Cannot find the target " + target);
            System.out.println("floor " + indices.floor + " : ceil" + indices.ceil);
        } else
            System.out.println("Find " + (indices.ceil - indices.floor + 1)
                    + " values in the range [" + indices.floor + ", "
                    + indices.ceil + "]");
    }
}
