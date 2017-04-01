package io.innofang.utils.compare.impl;

import io.innofang.utils.compare.Comparable;

/**
 * Created by Inno Fang on 2017/3/30.
 *
 */
public class LongComparison implements Comparable<Long> {

    @Override
    public boolean moreThan(Long obj1, Long obj2) {
        return obj1 > obj2;
    }

    @Override
    public boolean lessThan(Long obj1, Long obj2) {
        return obj1 < obj2;
    }

    @Override
    public boolean equal(Long obj1, Long obj2) {
        return obj1.equals(obj2);
    }
}
