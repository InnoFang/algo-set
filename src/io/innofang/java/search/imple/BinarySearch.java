package io.innofang.java.search.imple;

import io.innofang.java.search.ISearch;
import io.innofang.java.utils.TestHelper;
import io.innofang.java.utils.comparator.Comparator;

/**
 * Created by Inno Fang on 2017/4/2.
 * Binary Search
 */
public class BinarySearch extends ISearch {

    public BinarySearch(Comparator comparator) {
        super(comparator);
    }

    @Override
    @SuppressWarnings("unchecked")
    public <T> Indices search(T[] arr, T target) {
        if (TestHelper.isAscending(arr, comparator)
                && TestHelper.isDescending(arr, comparator))
            throw new RuntimeException("The array must be ordered");
        int floorIndex = floor(arr, target);
        int ceilIndex = ceil(arr, target);
        return new Indices(floorIndex, ceilIndex);
    }


    /**
     * @param arr
     * @param target
     * @param <T>
     * @return 二分查找法, 在有序数组arr中, 查找target
     * 如果找到target, 返回第一个target相应的索引index
     * 如果没有找到target, 返回比target小的最大值相应的索引, 如果这个最大值有多个, 返回最大索引
     * 如果这个target比整个数组的最小元素值还要小, 则不存在这个target的floor值, 返回-1
     */
    @SuppressWarnings("unchecked")
    private <T> int floor(T[] arr, T target) {
        // 寻找比target小的最大索引
        int l = -1, r = arr.length - 1;
        while (l < r) {
            int mid = l + (r - l + 1) / 2;
            if (comparator.moreThanOrEqualTo(arr[mid], target))
                r = mid - 1;
            else // map[mid] < target
                l = mid;
        }
        // 如果该索引+1就是target本身, 该索引+1即为返回值
        if (l + 1 < arr.length && arr[l+1] == target)
            return l + 1;
        // 否则, 该索引即为返回值
        return l;
    }

    /**
     * @param arr    an ordered array
     * @param target the target you want to find
     * @param <T>    reference data type
     * @return 二分查找法, 在有序数组arr中, 查找target
     * 如果找到target, 返回最后一个target相应的索引index
     * 如果没有找到target, 返回比target大的最小值相应的索引, 如果这个最小值有多个, 返回最小的索引
     * 如果这个target比整个数组的最大元素值还要大, 则不存在这个target的ceil值, 返回整个数组元素个数n
     */
    @SuppressWarnings("unchecked")
    private <T> int ceil(T[] arr, T target) {
        int l = 0, r = arr.length;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (comparator.lessThanOrEqualTo(arr[mid], target))
                l = mid + 1;
            else // map[mid] > target
                r = mid;
        }
        // 如果该索引-1就是target本身, 该索引-1即为返回值
        if (r - 1 > 0 && arr[r - 1] == target)
            return r - 1;
        // 否则, 该索引即为返回值
        return r;
    }
}
