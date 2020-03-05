package io.innofang;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

/**
 * Created by Inno Fang on 2018/2/6.
 */
class Solution {

    /**
     * 16 / 16 test cases passed.
     * Status: Accepted
     * Runtime: 5 ms
     *
     * @param numbers
     * @param target
     * @return
     */
    public int[] twoSum(int[] numbers, int target) {
        Map<Integer, Integer> store = new HashMap<>();
        for (int i = 0; i < numbers.length; i++) {
            int num = numbers[i];
            if (store.containsKey(target - num)) {
                return new int[]{store.get(target - num) + 1, i + 1};
            }
            store.put(num, i);
        }
        return new int[]{};
    }
}