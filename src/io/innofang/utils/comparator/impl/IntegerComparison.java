package io.innofang.utils.comparator.impl;

import io.innofang.utils.comparator.Comparator;

/**
 * Created by Inno Fang on 2017/3/28.
 *
 */
public class IntegerComparison implements Comparator<Integer> {
    @Override
    public boolean moreThan(Integer obj1, Integer obj2) {
        return obj1 > obj2;
    }

    @Override
    public boolean lessThan(Integer obj1, Integer obj2) {
        return obj1 < obj2;
    }

    @Override
    public boolean equal(Integer obj1, Integer obj2) {
        return obj1.equals(obj2);
    }

}
